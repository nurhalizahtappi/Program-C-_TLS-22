//Membuat Program sederhana untuk menghitung jumlah siswa 

#include <iostream>
using namespace std;
int main () {
	
//menginput nama-nama siswa yang hadir
	
	int NamaSiswa;
	int JumlahSiswa;
	string Nama;
	
	cout << "Masukkan nama siswa yang hadir :" << endl;

//menghitung jumlah nama yang diinput

	while (getline(cin, Nama)){
		JumlahSiswa++;
	}
	
	cout << "Jumlah siswa yang hadir :" << JumlahSiswa << endl;
	
	return 0;
	
}
