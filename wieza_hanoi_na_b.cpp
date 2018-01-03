#include <iostream>

using namespace std;

void Hanoi(int m, char a, char c, char b){

  if(m == 1){
    cout << "Przeloz dysk " << m << " z " << a << " na " << b << endl;
  }
  else{
    Hanoi(m-1, a,b,c);
    cout << "Przeloz dysk " << m << " z " << a << " na " << b << endl;
    Hanoi(m-1,c,a,b);
  }
}

int main(){

  int dyski;
  cout << "Podaj liczbe dyskow: " << endl;
  cin >> dyski;
  Hanoi(dyski, 'A', 'C', 'B');



}
