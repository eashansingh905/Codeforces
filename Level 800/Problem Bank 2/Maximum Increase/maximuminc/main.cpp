#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter =1;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int maxi = 1;
    for(int i=1; i<n; i++)
    {

        if(a[i]>a[i-1])
            counter++;
        else
            counter = 1;

        if(counter>maxi)
            maxi=counter;
    }

    cout<<maxi;
    return 0;
}
