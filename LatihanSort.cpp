#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

void cetak( vector<string>& kata) {
    for (size_t i = 0; i < kata.size(); i++) {
        if (i > 0) cout << " ";
        cout << kata[i];
    }
    cout << '\n';
}

int main() {
    int n;

    while (true) {
        cout << "Berapa kata yang akan diinput: ";
        cin >> n;

        if (cin.fail() || n <= 0) {// cek kalo inputnya itu bukan angka >0
            cout << "Input salah! Masukkan angka positif.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    vector<string> kata(n);

    cout << "\nMasukkan " << n << " kata:\n";
    for (int i = 0; i < n; i++) {
        cout << "Kata ke-" << i + 1 << ": ";
        cin >> kata[i];
    }

    cout << "\nSusunan Awal: ";
    cetak(kata);


    int langkah = 0;
    
    cout << "\nProses Insertion Sort:\n";
    for (int i = 1; i < n; i++) {
        int j = i;
        bool adaTukar = false;

        // kalo ada posisi kata yang tertukar
        while (j > 0 && kata[j - 1] > kata[j]) {
            swap(kata[j - 1], kata[j]);
            j--;
            adaTukar = true;

            langkah++;
            cout << "Langkah " << langkah << ": ";
            cetak(kata);
        }

        // kalo posisi kata gak ada yang tertukar tapi tetap dihitung 1 langkah
        if (!adaTukar) {
            langkah++;
            cout << "Langkah " << langkah << ": ";
            cetak(kata);
        }
    }

    cout << "\nHasil akhir: ";
    cetak(kata);


}