#include <iostream>
using namespace std;

void Pattern15(int N){
  for(int i = 1; i <= N; i++){
    char ch = 'A';
    for(int j = 1; j <= N-i+1; j++){
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
  Pattern15(n);
}