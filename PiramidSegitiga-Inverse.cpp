#include <iostream>
using namespace std;

int main() {
	cout << "- Program Piramid Bintang Menggunakan Rumus dr Matematika\n";
	
	int tinggi_segitiga, i, j, k;
	cout << "Input tinggi segitiga: ";
	cin >> tinggi_segitiga;
	
	cout << "\n";
	
	for(i = tinggi_segitiga; i >= 1; i--) {
		for(j = 1; j <= tinggi_segitiga - i; j++) {
			cout << " ";
		}
		for(k = 1; k <= i; k++) {
			cout << "* ";
		}
		cout << "\n";
	}
	return 0;
}


