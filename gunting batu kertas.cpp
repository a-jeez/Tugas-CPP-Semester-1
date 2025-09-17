#include <unistd.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	string PilihanAceng;
	string PilihanKomputer;
	int randomKomputer;
	
	while(true) {
		cout << "Masukkan pilihan gunting/batu/kertas: " << endl;
		cin >> PilihanAceng;
		srand(time(0));
		
		while(PilihanAceng != "Gunting" && PilihanAceng != "Batu" && PilihanAceng != "Kertas") {
			cout << "Masukkan pilihan gunting/batu/kertas: " << endl;
			cin >> PilihanAceng;
		}
		randomKomputer = rand() % 3;
		
		if(randomKomputer == 0) {
			PilihanKomputer = "Gunting";
		} else if(randomKomputer == 1) {
			PilihanKomputer = "Batu";
		} else if(randomKomputer == 2) {
			PilihanKomputer = "Kertas";
		}
	
		sleep(2);	
		
		cout << "Aceng memilih " << PilihanAceng << ", sedangkan " << "Komputer memilih " << PilihanKomputer << endl;
	
		if(PilihanAceng == PilihanKomputer) {
			printf("\nMaka dengan ini, dinyatakan seri\n");	
		}
		else if
			((PilihanAceng == "Gunting" && PilihanKomputer == "Kertas") ||
			(PilihanAceng == "Batu" && PilihanKomputer == "Gunting") ||
			(PilihanAceng == "Kertas" && PilihanKomputer == "Batu"))
		{
			cout << "Maka aceng menang\n" << endl;	
		}
		else {
			cout << "Maka aceng kalah\n" << endl;
		}
		
		string konfirmLanjut;
		cout << "Apakah anda ingin lanjut? (y/n)";
		cin >> konfirmLanjut;
		
		while(konfirmLanjut != "y" && konfirmLanjut != "n") {
			cout << "Apakah anda ingin lanjut? (y/n)";
			cin >> konfirmLanjut;
		}
		if(konfirmLanjut == "y") {
			continue;
		} else if(konfirmLanjut == "n") {
			break;
		}
	}

}
