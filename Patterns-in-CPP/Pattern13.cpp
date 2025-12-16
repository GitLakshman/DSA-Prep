#include <iostream>
using namespace std;
void Pattern13(int N){
  int count = 1;
  for(int i = 0; i < N; i++){
    for(int j = 0; j <= i; j++){
      cout << count << " ";
      count = count+1;
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern13(n);
}