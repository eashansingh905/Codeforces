#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int total = 0;

    for(int i= 0; i<n; i++)
        cin>>a[i];


    sort(a,a+n);

    for(int i = 0; i<n; i++)
    {
        total += a[n-1]- a[i];

    }

    cout<<total;

    return 0;
}
