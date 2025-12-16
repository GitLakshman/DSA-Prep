#include <iostream>
using namespace std;

void Pattern10(int N){
  for(int i = 1; i <= 2*N-1; i++){
    int stars = i;
    if(i > N) stars = 2*N-i;
    for(int j = 0; j < stars; j++){
      cout << "*";
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern10(n);
}