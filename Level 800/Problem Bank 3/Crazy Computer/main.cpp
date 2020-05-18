#include <iostream>

using namespace std;

int main()
{
    int n, diff;
    cin>>n>>diff;

    long long int sum = 1;
    long long int a[n];

    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i = 0; i<n-1; i ++)
    {
        if(a[i+1] - a[i] <= diff)
            sum++;
        else
            sum = 1;


    }

    cout<<sum;
    return 0;
}
