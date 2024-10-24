#include <iostream>

using namespace std;

bool isPrime(int num){
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printFactors(int num){
    cout << "(Faktor: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << ")";
}

int main(){
    int batas;

    cout << "Masukkan batas: ";
    cin >> batas;

    int jumlahGenap = 0, jumlahGanjil = 0, jumlahPrima = 0;

    cout << "Bilangan Genap: ";
    for (int i = 1; i <= batas; i++){
        if (i % 2 == 0) {
            cout << i << " ";
            jumlahGenap += i;
            printFactors(i);
        }
    }
    cout << "\nJumlah Bilangan Genap: " << jumlahGenap << endl;

    cout << "\nBilangan Ganjil: ";
    for (int i = 1; i <= batas; i++){
        if (i % 2 != 0){
            cout << i << " ";
            jumlahGanjil += i;
            printFactors(i);
        }
    }
    cout << "\nJumlah Bilangan Ganjil: " << jumlahGanjil << endl;

    cout << "\nBilangan Prima: ";
    for (int i = 1; i <= batas; i++){
        if (isPrime(i)){
            cout << i << " ";
            jumlahPrima += i;
            printFactors(i);
        }
    }
    cout << "\nJumlah Bilangan Prima: " << jumlahPrima << endl;

    return 0;
}
