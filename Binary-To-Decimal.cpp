#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int i=0, ans=0;
  while(n != 0)
    {
      int digit = n%10; //Consider input as digits and not binary numbers 
      if(digit == 1)
      {
        ans = ans + pow(2,i);
      }
      n = n/10;
      i++;
    }
  cout<<ans;
}
