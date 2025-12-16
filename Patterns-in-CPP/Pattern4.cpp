#include <iostream>
using namespace std;

void Pattern4(int N){
  for( int i = 1; i <= N; i++){
    for( int j = 1; j <= i; j++){
      cout << i << " ";
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern4(n);
}
