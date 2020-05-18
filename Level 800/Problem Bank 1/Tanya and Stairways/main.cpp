#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int floors=0;
    for(int i=0; i<n;i++)
    {
        cin>>a[i];

        if(a[i]==1)
            floors++;
    }
    cout<<floors<<endl;
    for(int i = 0; i<n; i++)
    {

       if(a[i+1]==1)
            cout<<a[i]<<" ";
       if(i==n-1)
            cout<<a[n-1];


    }





    return 0;
}
