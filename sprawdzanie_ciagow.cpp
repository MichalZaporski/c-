#include <iostream>
#include <windows.h>
#include <ctime>
#include <conio.h>
#include <cstdlib>

using namespace std;

void losowanie(int *tab, int liczba){
    srand(time(NULL));

    for(int i=0; i<liczba; i++){
        tab[i] = rand()%10+1;
    }
}

void wypisz(int *tab, int liczba){
    cout << "Twoj ciag znakow to:" <<endl;

    for(int i=0; i<liczba; i++){
        cout<<tab[i]<<" ";
    }
}

bool czy_rosnacy(int *tab, int liczba){
    for(int i=0; i<liczba-1; i++){
        if (tab[i]>=tab[i+1]) return false;
    }
    return true;
}

bool czy_malejacy(int *tab, int liczba){
    for(int i=0; i<liczba-1; i++){
        if (tab[i]<=tab[i+1]) return false;
    }
    return true;
}

bool czy_nierosnacy(int *tab, int liczba){
    for(int i=0; i<liczba-1; i++){
        if (tab[i]<tab[i+1]) return false;
    }
    return true;
}

bool czy_niemalejacy(int *tab, int liczba){
    for(int i=0; i<liczba-1; i++){
        if (tab[i]>tab[i+1]) return false;
    }
    return true;
}

bool czy_staly(int *tab, int liczba){
    for(int i=0; i<liczba-1; i++){
        if (tab[i]!=tab[i+1]) return false;
    }
    return true;
}

bool czy_niemonotoniczny(int *tab, int liczba){

    if(czy_rosnacy(tab, liczba)==true) return false;
    if(czy_malejacy(tab, liczba)==true) return false;
    if(czy_nierosnacy(tab, liczba)==true) return false;
    if(czy_niemalejacy(tab, liczba)==true) return false;
    if(czy_staly(tab, liczba)==true) return false;
    return true;
}


int main()
{
    int liczba;
    char wybor;
    bool flag_program_wlaczony=true, flag_petla_wypisywanie;
    while(flag_program_wlaczony==true){
        cout << "Podaj ile liczb w ciagu wylosowac: ";
        while((!(cin>>liczba))||(liczba<1)){
            cout << "Niepoprawne dane wejsciowe!"<<endl;
            cin.clear();
            cin.sync();
            system("pause");
            system("cls");
            cout << "Podaj ile liczb w ciagu wylosowac: ";
        }
        system("cls");
        int *tab = new int[liczba];
        losowanie(tab, liczba);
        flag_petla_wypisywanie=true;
        while(flag_petla_wypisywanie==true){
            wypisz(tab, liczba);

            cout << endl << endl <<  "Sprawdz czy ciag jest: -> Wpisz litere"<<endl;
            cout << "a) Rosnacy"<<endl;
            cout << "b) Malejacy"<<endl;
            cout << "c) Nierosnacy"<<endl;
            cout << "d) Niemalejacy"<<endl;
            cout << "e) Staly"<<endl;
            cout << "f) Niemonotoniczny"<<endl;
            cout << "---------------------"<<endl;
            cout << "g) Wylosuj nowy ciag"<<endl;
            cout << "h) Podaj inny rozmiar"<<endl;
            cout << "i) Wyjdz z programu"<<endl<<endl;
            wybor=getch();
            switch(wybor){
                case 'a':
                    if(czy_rosnacy(tab, liczba)==true) cout << "Ciag jest rosnacy!";
                    else cout << "Ciag nie jest rosnacy!";
                break;

                case 'b':
                    if(czy_malejacy(tab, liczba)==true) cout << "Ciag jest malejacy!";
                    else cout << "Ciag nie jest malejacy!";
                break;

                case 'c':
                    if(czy_nierosnacy(tab, liczba)==true) cout << "Ciag jest nierosnacy!";
                    else cout << "Ciag nie jest nierosnacy!";
                break;

                case 'd':
                    if(czy_niemalejacy(tab, liczba)==true) cout << "Ciag jest niemalejacy!";
                    else cout << "Ciag nie jest niemalejacy!";
                break;

                case 'e':
                    if(czy_staly(tab, liczba)==true) cout << "Ciag jest staly!";
                    else cout << "Ciag nie jest staly!";
                break;

                case 'f':
                    if(czy_niemonotoniczny(tab, liczba)==true) cout << "Ciag jest niemonotoniczny!";
                    else cout << "Ciag nie jest niemonotoniczny!";
                break;

                case 'g':
                    losowanie(tab, liczba);
                    wypisz(tab, liczba);
                break;

                case 'h':
                    system("cls");
                    flag_petla_wypisywanie=false;;
                break;

                case 'i':
                    flag_program_wlaczony=false;
                    flag_petla_wypisywanie=false;
                break;

                default:
                    cout << "Nie ma takiej funkcji!";
                break;
            }
            cout << endl;
            if((wybor!='g')&&(wybor!='h')&&(wybor!='i'))system("pause");
            system("cls");
        }
        delete [] tab;
    }
}
