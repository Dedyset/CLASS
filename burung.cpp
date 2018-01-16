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
	
	cout <<"Burung Rajawali berwarna " <<(burungRajawali.warnaBulu);
	cout <<"makanannya " <<(burungRajawali.jenisMakanan);
	burungRajawali.bersuara("cuittt");
	
	cout <<"Burung Cucakrowo berwarna " <<(burungCucakrowo.warnaBulu);
	cout <<"makanannya " <<(burungCucakrowo.jenisMakanan);
	burungCucakrowo.bersuara("cokkk");
}

void burung::bersuara(string bunyi){
	cout << " Bunyinya "<<bunyi<< " !!"<<endl;
}
