#include <iostream>
using namespace std;

void Pattern20(int N){
  for(int i = 1; i <= 2*N-1; i++){
    int stars;
    int spaces;
    
    if(N < i){
      stars = 2*N-i;
      spaces = (2*i)-(2*N);
    }
    else{
      stars = i;
      spaces = (2*N)-(2*i);
    }
    
    for(int j = 1; j <= stars; j++){
      cout << "*";
    }
    for(int k = 1; k <= spaces; k++){
      cout << " ";
    }
    for(int j = 1; j <= stars; j++){
      cout << "*";
    }
    cout << endl;
  }
  
}

int main(){
  int n;
  cin >> n;
  Pattern20(n);
}