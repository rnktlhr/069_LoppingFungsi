#include <iostream>
using namespace std;

string nama;
int nXpander, nPorsche, nAvanza, nBrio, nLamborgini;
int hXpander = 300, hPorsche = 8000, hAvanza= 250, hBrio = 200, hLamborgini= 6000;

void input(){
    cout << "Nama Pembeli : ";
    cin >> nama;

    cout << "Jumlah Xpander = ";
    cin >> nXpander;

    cout << "Jumlah Porsche = ";
    cin >> nPorsche;

    cout << "Jumlah Avanza = ";
    cin >> nAvanza;

    cout << "Jumalah Brio = ";
    cin >> nBrio;

    cout << "Jumlah Lamborgini = ";
    cin >> nLamborgini;
}

int TotalHarga(){
    return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborgini * hLamborgini);
}

void Display(){
    cout << "Total Harga = "<< TotalHarga() << endl;
}

int main(){
    char pilihan;
    do{
        
    input();
    Display();
    cout << "Apakaha ingin membeli lagi?";
    cin >> pilihan;

    }while (pilihan == 'y' || pilihan == 'Y');
}