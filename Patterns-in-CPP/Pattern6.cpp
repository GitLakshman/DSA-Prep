#include <iostream>
using namespace std;

void Pattern6(int N){
  for( int i = 1; i <= N; i++){
    int k = 1;
    for( int j = N; j >= i; j--){
      cout << k << " ";
      k++;
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
    Pattern6(n);
}
