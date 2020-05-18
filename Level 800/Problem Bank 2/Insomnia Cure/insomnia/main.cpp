#include <iostream>

using namespace std;

int main()
{
    int k, l,m,n,d;

    cin>>k>>l>>m>>n>>d;

    int arr[d] = {0};
    int counter=0;


    for(int i = 0 ; i<d; i++ )
    {
        if((i+1)%k ==0 )
            arr[i]=1;
        if((i+1)%l ==0 )
            arr[i]=1;

        if((i+1)%m ==0 )
            arr[i]=1;

        if((i+1)%n ==0)
            arr[i]=1;



    }

    for(int i = 0; i<d; i++ )
    {
        if(arr[i]==1)
            counter++;



    }

    cout<<counter;

    return 0;
}
