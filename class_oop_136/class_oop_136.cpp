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
	string nama;
	int sks;
};