#include <iostream>
using namespace std;

void Pattern16(int N){
  char ch = 'A';
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= i; j++){
      cout << ch << " ";
    }
    cout << endl;
    ch = ch+1;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern16(n);
}