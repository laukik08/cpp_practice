#include <iostream>
using namespace std;

int main() {
  int n;
  int factorial=1;
  
  cout<<"entwr thw no.";
  cin>>n;
  
  for(int i=2; i<=n; i++)
  {
      factorial*= i;
  }
  
  cout<<factorial;
  
    return 0;
}