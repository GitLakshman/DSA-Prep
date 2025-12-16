#include <iostream>
using namespace std;

void Pattern19(int N){
  for(int i = 0; i < 2*N; i++){
    int stars = N-i;
    int spaces = 2*i;
    if( i >= N){
      stars = i-N+1;
      spaces = 2*(2*N-i-1);
    }
    //stars
    for(int j = 0; j < stars; j++){
      cout << "*" << " ";
    }
    //spaces
    for(int j = 0; j < spaces; j++){
      cout << " " << " ";
    }
    //stars
    for(int j = 0; j < stars; j++){
      cout << "*" << " ";
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern19(n);
}