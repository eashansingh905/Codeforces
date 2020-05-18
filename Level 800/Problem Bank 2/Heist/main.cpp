#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter = 0;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);

    for(int i=1; i<=n; i++)
    {
        if(a[i] != a[i-1]+1)
        {
            while(a[i-1]!= a[i])
            {
                a[i-1]++;
                counter++;
            }

            --counter;
        }


    }

    cout<<counter;
    return 0;
}
