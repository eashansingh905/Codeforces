#include <iostream>

using namespace std;

int main()
{
    int n,value;
    cin>>n;

    int arr1[n];
    int arr2[n];

    for(int i = 0; i<n; i++)
    {
        cin>>value;
        arr1[i]=value;
    }

    for(int i = 1; i<=n;i++)
    {
       value = arr1[i-1];
       arr2[value-1]= i ;

    }

    for(int i = 0; i<n; i++)
        cout<<arr2[i]<<" ";

    return 0;
}
