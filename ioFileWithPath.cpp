#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string namefile;
    cout << "Masukan Nama file : " << endl;
    cin >> namefile;
    cin.ignore();

    // membuat objek output file stream
    ofstream outfile;
    //membuka file untuk ditulis
    outfile.open(namefile + ".csv");

    cout << " >= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        // mendapatkan setuiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        // menulis dan memasukan nilai dari 'baris' ke dalam file 
        outfile << baris << endl;
    }
    //selesai dalam menulis skarang tutuo filenya
    outfile.close();

    //membuat objek input file stream
    ifstream infile;
    // membuka file yang dituliskan
    infile.open(namefile + ".csv");

    cout << endl << ">= Membuka dan membaca file " << endl;
    // jika file ada maka 
    if (infile.is_open())
    {
        // melakukan peruilangan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan di sini
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesai
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unstable to open file";
    return 0;
}