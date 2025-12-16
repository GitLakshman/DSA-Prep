#include <iostream>
using namespace std;

void Pattern8(int N){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < i; j++){
      cout << " ";
    }
    for(int j = 0; j < (2*N) - (2*i+1); j++){
      cout << "*";
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern8(n);
}