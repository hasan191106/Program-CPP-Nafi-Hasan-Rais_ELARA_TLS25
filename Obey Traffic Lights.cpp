#include <iostream>
using namespace std;

string warnaLampu(int t) {
    int green = 20, yellow = 3, red = 80;
    int cycle = green + yellow + red; // total 103
    int offset = 78; // supaya detik 45 = kuning

    int pos = (t + offset) % cycle;

    if (pos < green) return "HIJAU";
    else if (pos < green + yellow) return "KUNING";
    else return "MERAH";
}

int main() {
    int waktu;
    cout << "Masukkan detik ke berapa: ";
    cin >> waktu;

    cout << "Pada detik ke-" << waktu << " lampu = " << warnaLampu(waktu) << endl;
    return 0;
}
