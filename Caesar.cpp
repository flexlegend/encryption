#include <string>
#include "Caesar.h"
using namespace std;
int mod(int a, int b){
	if (a % b < 0)
		return a % b + b;
	else
		return a % b;
}

string CaesarCipher(std::string messege, int key, int crypt) {
	string slovar1 = "abcdefghijklmnopqrstuvwxyz";
	string slovar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string slovar3 = "1234567890";
	int n1 = slovar1.size();
	int n2 = slovar2.size();
	int n3 = slovar3.size();

	if (crypt == 2)
		key = key * -1;
	int key1 = key % n1;
	int key2 = key % n1;
	int key3 = key % n1;
	string res = "";
	for (char item : messege)
		if (item == ' ')
		{
			res += ' ';
		}
		else if (slovar1.find(item) != -1)
		{
			res += slovar1[mod((slovar1.find(item) + key), n1)];
		}
		else if (slovar2.find(item) != -1)
		{
			res += slovar2[mod((slovar2.find(item) + key), n2)];
		}
		else if (slovar3.find(item) != -1)
		{
			res += slovar3[mod((slovar3.find(item) + key), n3)];
		}
	return res;
}