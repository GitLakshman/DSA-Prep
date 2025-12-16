#include <iostream>
using namespace std;

void Pattern5(int N){
  for(int i = 0; i < N; i++){
    for( int j = N; j > i; j--){
      cout << "* ";
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern5(n);
}
