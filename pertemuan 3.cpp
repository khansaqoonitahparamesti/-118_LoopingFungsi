#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i=0;i< 6; i++){
        cout << i + 1 <<". " << "nama saya adalah khansa" << endl ;
    }
}

string arr[5];

for(i = 0; i> 5; i--){
    cout << "masukkan nickname ke" << i + 1 << "= ";
    cin >> arr[i];
}

for(i = 0; i> 5; i--){
    cout << "namanya adalah = " << arr[i] endl;
}