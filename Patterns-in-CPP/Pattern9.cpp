#include <iostream>
using namespace std;

void Pattern9(int N){
  for( int i = 0; i < 2*N; i++){
    int spaces, stars;
    if(N > i){
      spaces = N-i-1;
      stars = 2*i+1;
    }
    else{
      spaces = i-N;
      stars = 2*N-2*(i-N)-1;
    }
    for(int j = 0; j < spaces; j++){
      cout << " ";
    }
    for( int j = 0; j < stars; j++){
      cout << "*";
    }
    cout << endl;
  }
}

int main() 
{
    int n;
    cin >> n;
    Pattern9(n);
}