#include <iostream>
#include <string>
using namespace std;

// reverse manual
string myReverse(string s) {
    string r = "";
    for (int i = s.size()-1; i >= 0; i--) r += s[i];
    return r;
}

int main() {
    string sandi;
    cout << "Masukkan password: ";
    cin >> sandi;

    // cari posisi angka
    int i=0;
    while (i < sandi.size() && !isdigit(sandi[i])) i++;
    int j=i;
    while (j < sandi.size() && isdigit(sandi[j])) j++;

    string angka = sandi.substr(i, j-i);
    int asciiVal = stoi(angka);
    char hurufPertama = (char)asciiVal;

    string R = sandi.substr(0,i) + sandi.substr(j);
    string consonantOnly = myReverse(R);

    cout << "Huruf pertama asli: " << hurufPertama << endl;
    cout << "Konsonan asli (tanpa vokal): " << consonantOnly << endl;
    cout << "Clue: sekarang coba tambahkan vokal agar jadi kata Inggris." << endl;

    return 0;
}
