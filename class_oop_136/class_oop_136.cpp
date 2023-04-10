#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nim;
	string nama;
public: void cetak() {
	cout << "NIM =" << nim;
	cout << "\nNAMA =" << nama;
}
};

class matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public :
	void input() {
		cout << "Masukan kode matakuliah : ";
		cin >> kode;
		cout << "Nama matakuliah : ";
		cin >> namaM;
		cout << "Jumlah SKS :";
		cin >> sks;
	}
	void tampil() {
		cout << "Kode matakuliah :" << kode;
		cout << "Nama matakuliah :" << namaM;
		cout << "SKS : " << sks;
	}
};
int main() {
	mahasiswa mhs1;
	matakuliah mk;

	cout << "Masukan NIM :";
	cin >> mhs1.nim;
	cout << "Masukan Nama :";
	cin >> mhs1.nama;
	
}