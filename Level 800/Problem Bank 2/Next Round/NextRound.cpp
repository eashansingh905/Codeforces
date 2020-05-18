#include <iostream>
using namespace std;

int main() {

  int n, k, a[50], sum =0, i;
  int value;

  cin>>n>>k;

  for(i=0; i<n; i++)
  {
      cin>> value;
      a[i]=value;

  }

  for(i = 0; i<n; i++)
  {
      if(a[i]>=a[k-1]&&a[i]>0)
        sum++;

  }

  cout<<sum;
  return 0;
}
