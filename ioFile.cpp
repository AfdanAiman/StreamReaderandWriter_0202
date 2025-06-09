#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;


    // membuat objek output file stream
    ofstream outfile;
    //membuka file untuk ditulis
    outfile.open("contohfile.txt");

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
    infile.open("contohfile.txt");

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
    
}