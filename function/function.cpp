#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID(); // Metode untuk menetapkan ID
	void printAll(); // Metode untuk mencetak detail

	static void setNim(int pNim) { nim = pNim; } // Fungsi anggota statis untuk mengatur nim
	static int getNim() { return nim;  }  // Fungsi anggota statis untuk mendapatkan nilai nim

	// Konstruktor yang menerima nama dan menginisialisasi objek
	Mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int Mahasiswa::nim = 158;

void Mahasiswa::setID() {
	id = ++nim;
}





















int main()
{
    
}