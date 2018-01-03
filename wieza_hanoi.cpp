#include <iostream>

using namespace std;

void Hanoi(int m, char a, char b, char c){

  if(m == 1){
    cout << "Przeloz dysk " << m << " z " << a << " na " << c << endl;
  }
  else{
    Hanoi(m-1, a,c,b);
    cout << "Przeloz dysk " << m << " z " << a << " na " << c << endl;
    Hanoi(m-1,b,a,c);
  }
}

int main(){

  int dyski;
  cout << "Podaj liczbe dyskow: " << endl;
  cin >> dyski;
  Hanoi(dyski, 'A', 'B', 'C');



}
