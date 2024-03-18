#include <iostream>
using namespace std;

int main(){

    int x;
    srand(time(0));

    do
    {
       cout << " perulangan dengan Do..while" << endl;
       x = rand() % 10;
       cout << " nilai x = " << x << endl;
    } while (x > 4);

    char pilihan;

    do{
        string nama;

        cout << " masukkan nama = ";
        cin >> nama;

        cout << " Apakah anda ingin mengulangi lagi? (y/n)";
        cin >> pilihan;

    }while(pilihan == 'y' || pilihan == 'Y');
}