#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];

    }

    sort(a,a+n);

    for(int i = 1; i<=n; i++)
    {
        sum += a[i]-a[i-1];
        i++;

    }


    cout<<sum;
    return 0;
}
