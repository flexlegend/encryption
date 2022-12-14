#include <string>
#include "viginer.h"


std::string ViginerCipher(std::string messege, std::string p, int crypt) {
	std::string slovar = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
	int m = p.size(), n = slovar.size(), k = 0; 
	int l;
	std::string res = "";
	for (char item : messege){
		if (crypt == 1)
			l = (slovar.find(item) + slovar.find(p[k++ % m]));
		else
			l = (slovar.find(item) - slovar.find(p[k++ % m]));
		l = l % n;
		if (l < 0)
			l = l + n;
		res += slovar[l];
	}
	return res;
}