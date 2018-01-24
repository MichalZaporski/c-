#include <iostream>


using namespace std;

int main()
{
    int maksimum = INT_MIN, liczba, suma=0;

    cout << "Podaj ile liczb chcesz wpisac: ";
    cin >> liczba;

    int *tab = new int[liczba];

    for(int i=0; i<liczba; i++){
        cout << "Podaj liczbe: ";
        cin >> tab[i];
    }

    for(int i=0; i<liczba; i++){
        for(int y=i; y<liczba; y++){
            suma = suma + tab[y];

            if(suma>maksimum) maksimum = suma;
        }
        suma = 0;
    }

    cout << "Najlepsza suma to: " << maksimum;
    delete[] tab;
    return 0;
}
