#include <iostream>
using namespace std;

void Pattern11(int N){
  for(int i = 0; i < N; i++){
    int start = 1;
    if (i%2==0) start = 1;
    else start = 0;
    for(int j = 0; j <= i; j++){
      cout << start << " ";
      start = 1-start;
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern11(n);
}