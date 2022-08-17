#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "Caesar.h"
#include "Viginer.h"
#include "A1Z23.h"
using namespace std;

enum cryptDo {
	encrypt = 1,
	decrypt = 2
};

enum Ciphers {
	Caesar = 1,
	Viginer = 2,
	A1Z23 = 3
};

int main() {
	string crypt_message;
	int method; 
	string ans;
	int crypt;
	string messege;

	cout << " Password: ";
	cin >> ans;
	if (ans == "1"){

		cout << " Enter number: \n\t[1]: Caesar.\n\t[2]: Viginer.\n\t[3]: A1Z23.\n";
		cin >> method;

		if ((method != 1) && (method != 2) && (method != 3)) {
			cout << "Error";
			return 0;
		}

		cout << " Enter number: \n\t[1]: encrypt\n\t[2]: decrypt\n ";
		(cin >> crypt).get();


		cout << " Enter messege: ";
		getline(cin, messege);


		if (method == Caesar) {
			cout << " Enter key from cipher(number):\n ";
			int key_num = 1; cin >> key_num;
			crypt_message = CaesarCipher(messege, key_num, crypt);
		}
		else if (method == Viginer) {
			cout << " Enter key from cipher(string):\n ";
			string key_str = "key"; cin >> key_str;
			crypt_message = ViginerCipher(messege, key_str, crypt);
		}
		else if (method == A1Z23) {
			crypt_message = A1Z23Cipher(messege, crypt);
		}
		
	cout << " Your messege: ";
	cout << crypt_message << endl;
	}
	return 0;
}