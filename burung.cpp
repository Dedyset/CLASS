#include <iostream>
#include <string>
using namespace std;

class burung{
	public:
		void bersuara(string bunyi);
		string jenisMakanan;
		string warnaBulu;
};

int main(){
	burung burungElang,burungRajawali,burungCucakrowo;
	
	burungElang.warnaBulu = "HITAM ";
	burungRajawali.warnaBulu = "COKELAT PUTIH ";
	burungCucakrowo.warnaBulu = "HIJAU ";
	
	burungElang.jenisMakanan = "Ular, Ayam, Kelinci.";
	burungRajawali.jenisMakanan = "Ular, tikus.";
	burungCucakrowo.jenisMakanan = "Biji-bijian.";
