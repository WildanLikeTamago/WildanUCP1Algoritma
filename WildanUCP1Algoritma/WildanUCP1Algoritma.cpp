#include <iostream>
#include <string>
namespace std{}

int main() {	
    
    //inisialisai data calon mahasiswa
    std::string nama[20] = { "Wawan","Fikri","Luthfi","Akhdan","Naufal","Dimas","Wildan","Deni","Adam","Reza","Chandra","Afnan","Arbiyan","Tedi","Arif","Agus","Dodo","Udin","Tampan","Samsul" };
    int matematika[20] = { 70,69,40,80,90,65,75,45,76,30,77,56,76,45,35,59,76,97,53,86 };
    int bahasa_inggris[20] = { 76,43,57,56,88,90,76,54,34,67,54,87,97,87,34,56,88,90,66,89 };

    //deklarasi jumlah diterima/ditolak
    int diterima = 0;
    int ditolak = 0;

    //cek kelayakan mahasiswa
    std::cout << "Nama\tStatus";
    for (int i = 0; i < 20; i++) {
        double rataRata = (matematika[i] + bahasa_inggris[i]) / 2.0;
        if (rataRata >= 70 || matematika[i] > 80) {
            std::cout << nama[i] << "\tDiterima" << endl;
            diterima++;
        }
        else {
            std::cout << nama[i] << "\tDitolak" << endl;
            ditolak++;
        }

        // Tampilkan jumlah diterima dan ditolak
        std::cout << "Total kandidat diterima: " << diterima << endl;
        std::cout << "Total kandidat ditolak: " << ditolak << endl;

        return 0;
    }