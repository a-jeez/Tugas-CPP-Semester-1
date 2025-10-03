#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

const string FLIP_SIDE_1 = "Angka 500";
const string FLIP_SIDE_2 = "Gambar Burung Garuda";
 
main() {
	string PilihanAjis;
	int SituasiKoin;
	
	while(true) {
		cout << "Pemrograman lempar koin sederhana" << endl;
		cout << "Apakah kamu mau melempar koin? (lempar/tidak): " << endl << endl;
		cin >> PilihanAjis;
		
		// Kita validasi apakah user menginput opsi dengan benar.
		while(PilihanAjis != "lempar" && PilihanAjis != "tidak") {
			cout << "Pemrograman lempar koin sederhana" << endl;
			cout << "Apakah kamu mau melempar koin? (lempar/tidak)" << endl;
			cin >> PilihanAjis;
		}
		
		// Tinggal kita validasi opsi yang user berikan.
		if(PilihanAjis == "lempar") {
			
			srand(time(0));
			SituasiKoin = rand() % 2 + 1;
			
			switch(SituasiKoin) {
				case 1: {
					cout << endl;
					cout << "Koin dilempar, dan menunjukkan sisi: " << FLIP_SIDE_1 << "." << endl << endl;
					break;
				}
				case 2: {
					cout << endl;
					cout << "Koin dilempar, dan menunjukkan sisi: " << FLIP_SIDE_2 << "." << endl << endl;
					break;
				}
			}
		} else if(PilihanAjis == "tidak") {
			break;
		}
		
	}	
}
