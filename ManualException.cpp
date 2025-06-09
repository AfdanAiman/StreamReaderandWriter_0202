#include <iostream>
using namespace std;

int main() 
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 3.5; // melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << a << " : Pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*jika selain integer maka block ini akan dieksekusi*/
        cout << "default Pengecualiaan diexsekusi" << endl;
    }
    return 0;
}