#include <iostream>
using namespace std;

void Pattern17(int N){
  for(int i = 1; i <= N; i++){
    //spaces
    for(int j = 1; j <= N-i; j++){
      cout << " ";
    }
    //no. of characters
    char ch = 'A';
    int breakPoint = (2*i)/2 - 1;
    for(int j = 1; j <= 2*i-1; j++){
      cout << ch;
      if( breakPoint >= j) ch++;
      else ch--;
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern17(n);
}