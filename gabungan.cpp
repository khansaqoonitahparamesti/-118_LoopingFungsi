#include <iostream>
using namespace std;

int nTelor, nMie, nAir;
int hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
    cout << "masukkan nama =";
    cin >> nama;
    cout << " masukkan jumlah telor=";
    cin >> nTelor
    cout << " masukkan jumlah mie=";
    cin >> nMie
    cout << " masukkan jumlah air= ";
    cin >> nAir
}

int hitungharga(){
    return ( nTelor*hTelor) + (nMie*hMie) + (nAir*hAir);
}

void dispaly(){
    cout << " nama = " << nama << endl;
    cout << " jumlah telor = " << nTelor << endl;
    cout << "jumlah mie = " << nMie << endl;
    cout << " jumlah air = " << nAir << endl;
    cout << "Total harga Rp." << hitungharga()<< endl;
}

int main(){
    
    char pilihan;

    do
    {
        input();
        dispaly();

        cout << " apakah anda ingin mengulangi (y/n)? ";
        cin>> pilihan;
    }while( pilihan == "y" || pilihan == "Y");
}