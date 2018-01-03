#include <iostream>

using namespace std;

long int potegowanie(int p,int w)
{
    if(w==0) return 1;
    else return p*potegowanie(p, w-1);
}

long int fib(int n)
{
    if(n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}

long int silnia (int n)
{
    if (n==0) return 1;
    else return n*silnia(n-1);
}

int main()
{
    long int podstawa, wykladnik, ciag, liczba_silnia;

    //Potêgowanie liczb
    cout << "Potegowanie liczby" << endl << "Podaj liczbe: ";
    cin >> podstawa;
    cout << "Podaj wykladnik liczby: ";
    cin >> wykladnik;
    cout <<"Wynik to: " << potegowanie(podstawa,wykladnik);

    //Wyznaczanie wyrazu ci¹gu fibonacciego
    cout << "Wyznaczanie wyrazu ci¹gu fibonacciego" << endl << "Ktory wyraz ciagu wyswietlic: ";
    cin >> ciag;
    cout <<"Liczba to: " << fib(ciag);

    //Obliczanie silni
    cout << "Obliczanie silni" << endl << "Silnie z ilu wyznaczyc: ";
    cin >> liczba_silnia;
    cout <<"Liczba to: " << silnia(liczba_silnia);


    return 0;
}
















