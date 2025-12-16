#include <iostream>
using namespace std;

void Pattern18(int N){
  char ch = 'A';
  for(int i = 1; i <= N; i++){
    ch = N-i+'A';
    for(int j = 1; j <= i; j++){
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern18(n);
}