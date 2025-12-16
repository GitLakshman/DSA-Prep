#include <iostream>
using namespace std;

void Pattern22(int N){
  for(int i = 0; i<2*N-1;i++){
    for(int j = 0; j<2*N-1;j++){
      int left = i;
      int top = j;
      int right = (2*N-2)-j;
      int bottom = (2*N-2)-i;
      
      cout << N - min(min(left,right), min(top, bottom)) << " ";
    }
    cout << endl;
  }
}

int main() 
{
  int n;
  cin >> n;
  Pattern22(n);
}