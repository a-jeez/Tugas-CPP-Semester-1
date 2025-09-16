#include <unistd.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
	string PilihanAceng;
	string PilihanKomputer;
	int randomKomputer;
	
	cout << "Masukkan pilihan gunting/batu/kertas: " << endl;
	cin >> PilihanAceng;

	//printf("Masukkan pilihan gunting/batu/kertas: "); gets(PilihanAceng);
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
		printf("\nMaka dengan ini, dinyatakan seri");	
	}
	else if
		((PilihanAceng == "Gunting" && PilihanKomputer == "Kertas") ||
		(PilihanAceng == "Batu" && PilihanKomputer == "Gunting") ||
		(PilihanAceng == "Kertas" && PilihanKomputer == "Batu"))
	{
		cout << "Maka aceng menang" << endl;	
	}
	else {
		cout << "Maka aceng kalah" << endl;
	}
}
