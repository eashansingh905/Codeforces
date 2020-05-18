#include <iostream>

using namespace std;

int main()
{
    int n,p,q,x,counter = 0;
    cin>>n>>p;
    int arr[n]= {0};

    while(p--)
    {
        cin>>x;

        arr[x-1]=1;

    }

    cin>>q;
    while(q--)
    {
        cin>>x;

        arr[x-1]=1;

    }

    for(int i = 0; i<n; i++)
    {
        if(arr[i]==1)
            counter++;

    }

    if(counter==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";

    return 0;
}
