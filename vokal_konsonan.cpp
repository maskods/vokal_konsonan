#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// Menentukan huruf vokal dan konsonan
	
	// Prepare Variabel
	char inpt, huruf;
	
	// Title
	cout << "===+ Menentukan Huruf Vokal/Konsonan +===" << endl << endl;
	
	// Input huruf
	cout << "Masukkan Huruf : ";
	cin >> inpt;
	
	huruf = tolower(inpt);
	
	// Proses Pemeriksaan
	if(huruf == 'a' or huruf == 'i' or huruf == 'u' or huruf == 'e' or huruf == 'o') {
		cout << huruf << " merupakan huruf vokal";
	} else {
		cout << huruf << " merupakan huruf konsonan";
	}
	return 0;
}
