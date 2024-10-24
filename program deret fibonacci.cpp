#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Masukkan jumlah elemen deret Fibonacci: ";
    cin >> n;

    int a = 0, b = 1, c;

    cout << "Deret Fibonacci: ";
    
    for (int i = 0; i < n; i++){
        if (i <= 1){
            cout << i << " ";
        } else{
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
    
    cout << endl;

    return 0;
}
