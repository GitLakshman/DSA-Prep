#include <iostream>
using namespace std;

void Pattern14(int N){
  for(int i = 1; i <= N; i++){
    char ch = 'A';
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
  Pattern14(n);
}