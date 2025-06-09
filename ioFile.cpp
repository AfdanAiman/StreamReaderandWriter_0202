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

    
}