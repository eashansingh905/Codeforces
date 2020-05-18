#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int n;
    long long int sum;
    cin>>n;

    if(n%2==0)
        sum = n/2;
    else
        sum = -1 * (n+1)/2;

    cout<<sum;
    return 0;
}
