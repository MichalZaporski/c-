#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int n, pomoc;
    cout << "Podaj ilosc elementow w tablicy: ";
    cin >> n;
    int *tab = new int[n];
    cout << "Twoj ciag znakow to: ";
    for(int i=0; i<n; i++){
        tab[i]=rand()%15;
        cout<< tab[i]<<" ";
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<n; j++){
          if(tab[j]>tab[j+1]){
            pomoc=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=pomoc;
          }
        }
    }
    cout << endl <<"Posortowany ciag znakow to: " ;
    for(int i=0; i<n; i++)
        cout << tab[i]<<" ";

    return 0;
}
