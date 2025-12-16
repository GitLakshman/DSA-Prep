#include <iostream>
using namespace std;

void Pattern12(int N){
  for(int i = 1; i <= N; i++){
    int num = 1;
    
    // numbers
    for(int j = 1; j <=i; j++){
      cout << num;
      num = num+1;
    }
    
    //spaces
    for(int j = 1; j <= 2*(N-i); j++){ // j <=2*N-2*i
      cout << " ";
    }
    
    // numbers
        for(int j = i; j >= 1; j--){
      cout << j;
    }
    
    // int backTrace = i;
    // for(int j = 1; j <= i; j++){
    //   cout << backTrace;
    //   backTrace--;
    // }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern12(n);
}