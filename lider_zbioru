#include <iostream>

using namespace std;

void lider(int *tab, int rozmiar){
    int pomo=0;

    for(int i=0; i<rozmiar; i++){
        for(int j=0; j<rozmiar; j++){
            if (tab[i]==tab[j]) pomo++;
        }

        if (pomo>rozmiar/2){
            cout << "Liczba " << tab[i] << " jest liderem zbioru";
            return;
        }
        pomo=0;
    }
    cout << "Nie ma lidera zbioru";
}

int main()
{
    int tab[6]={1,1,5,4,1,1};
    int rozmiar = sizeof(tab)/sizeof(int);
    lider(tab, rozmiar);
    return 0;
}
