#include <iostream>
using namespace std;

void Pattern21(int N){
  for(int i = 0; i < N; i++){
    if(i == 0 || i == N-1){
      for(int j = 0; j < N; j++){
        cout << "*" << " ";
      }
    }
    else{
      cout << "*" << " ";
      for(int j = 0; j < N-2; j++){
        cout << " " << " ";
      }
      cout << "*";
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern21(n);
}