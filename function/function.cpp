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

void Mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	Mahasiswa mhs1("Sri Dadi");
	Mahasiswa mhs2("Budi Jatmiko");
	Mahasiswa::setNim(9);	 // Mengakses nim melalui fungsi anggota statis "setNim"					//Mengakses nim melalui static member function "setNim"
	Mahasiswa mhs3("Andi Janu");
	Mahasiswa mhs4("Joko Wahono");


	// Mencetak detail dari setiap objek
	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	// Mengakses nim dari luar objek menggunakan fungsi statis getNim
	cout << "Akses dari luar object = " << Mahasiswa::getNim() << endl; //Mengakses nim
	system("Pause");

	return 0;

}