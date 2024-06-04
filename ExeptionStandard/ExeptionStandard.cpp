#include <iostream>
#include <exception>
// Untuk objek exception yang akan digunakan
#include <array>
// Untuk objek array yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; // Penanda 1:...
	try {
		array<int, 3> data = { 6, 7, 8 };
		// pesan array integer 3 elemen
		cout << data.at(5) << endl;
		// Memanggil array elemen ke 5
	}
	catch (exception& e) {
		// Penangkap menggunakan obyek exception
		cout << e.what() << endl;
		/*akan dieksekusi karna array data hanya memiliki 3 elemen*/
	}
	cout << "Baris Program Yang Terakhir" << endl;
	/*Penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi keesalahan*/
	return 0;
}