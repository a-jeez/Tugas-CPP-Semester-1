#include <iostream>
using namespace std;

main() {

	int angka1, angka2, value_tambahan, value_pengurangan, value_perkalian;
	float value_pembagian_float, value_pembagian_int, value_sisa_pembagian;
	
	cout << "Masukkan angka pertama: ";
	cin >> angka1;
	
	cout << "Masukkan angka kedua: ";
	cin >> angka2;
	
	// Penjumlahan
	value_tambahan = angka1+angka2;
	printf("Hasil tambahan: %d + %d = %d\n", angka1, angka2, value_tambahan);
	
	// Pengurangan
	value_pengurangan = angka1-angka2;
	printf("Hasil pengurangan: %d - %d = %d\n", angka1, angka2, value_pengurangan);
	
	// Perkalian
	value_perkalian = angka1*angka2;
	printf("Hasil perkalian: %d x %d = %d\n", angka1, angka2, value_perkalian);

	// Pembagian (integer)
	value_pembagian_int = angka1/angka2;
	printf("Hasil pembagian (integer): %d / %d = %.02f\n", angka1, angka2, value_pembagian_int);

	// Pembagian (float)
	value_pembagian_float = float(angka1)/float(angka2);
	printf("Hasil pembagian (float): %d / %d = %.02f\n", angka1, angka2, value_pembagian_float);
	
	// Sisa pembagian
	value_sisa_pembagian = angka1 % angka2;
	printf("Sisa pembagian: %d %% %d = %.02f\n", angka1, angka2, value_sisa_pembagian);
	return 0;
}
