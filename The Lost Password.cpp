#include <iostream>
#include <string>
using namespace std;

int main() {
    string sandi;
    cout << "Masukkan password: ";
    cin >> sandi;

    string angka = "";
    string huruf = "";

    // pisahkan angka dan huruf
    for (int i = 0; i < sandi.size(); i++) {
        if (isdigit(sandi[i]))
            angka += sandi[i];
        else
            huruf += sandi[i];
    }

    // ubah angka jadi huruf pertama
    char pertama = (char)stoi(angka);

    // tampilkan hasil
    cout << "Huruf pertama: " << pertama << endl;
    cout << "Konsonan (dibaca terbalik): ";
    for (int i = huruf.size()-1; i >= 0; i--) {
        cout << huruf[i];
    }
    cout << endl;

    cout << "Clue: tambahkan vokal agar jadi kata asli." << endl;

    return 0;
}
