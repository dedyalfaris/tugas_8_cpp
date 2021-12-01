#include<iostream>
using namespace std;
int main(){
    int x;

    cout<<"Inputkan Nilai x : ";
    cin>>x;

    switch (x){
    case 10000:
    cout<<"sepuluh ribu rupiah\n";
    break;
    case 20000:
    cout<<"dua puluh ribu rupiah\n";
    break;
    case 30000:
    cout<<"tiga puluh ribu rupiah\n";
    break;
    case 40000:
    cout<<"empat puluh ribu rupiah\n";
    break;
    case 50000:
    cout<<"lima puluh ribu rupiah\n";
    break;
    default:
    cout<<"Tidak Terdaftar di Program\n";
    }  
}