#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int liczba;

    cout << "Podaj maksimum: ";
    cin >> liczba;
    int pierwiastek = (int)sqrt((double)liczba);
    int *tablica = new int[liczba+1];

    for (int i = 0; i <= liczba; i++)
        tablica[i] = i;

    for (int i = 2; i <= pierwiastek; i++){
        if (tablica[i] != 0)
        for ( int j = 2*i; j <= liczba; j+= i)
            tablica[j] = 0;
    }

    cout << "Liczby pierwsze z przedzialu <2," << liczba << "> to:\n";

    for (int i = 2; i <= liczba; i++){
        if (tablica[i] != 0)
        cout << tablica[i] << " ";
    }

    return 0;
}
