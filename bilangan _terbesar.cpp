#include <iostream>
using namespace std;

int main() {
    int a, b, c, terbesar;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << "Masukkan bilangan ketiga: ";
    cin >> c;

    if (a > b)
        terbesar = a;
    else
        terbesar = b;
    if (c > terbesar)
        terbesar = c;
    cout << "Bilangan terbesar adalah: " << terbesar << endl;

    return 0;
}