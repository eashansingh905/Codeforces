#include <iostream>

using namespace std;

int main()
{
    long int arr[4];
    int counter =0;
    for(int i = 0; i<4;i++)
    {
        cin>>arr[i];
    }



    long int m = min(arr[0],min(arr[2],arr[3]));

    for(int i = 0; i<4; i++)
    {
        if(i!=1)
            arr[i] = arr[i] - m;
    }

    long int m2 = min(arr[0],arr[1]);

    int sum=0;
    for(int i = 0; i<m; i++)
        sum+=256;
    for(int i = 0; i<m2; i++)
        sum+=32;

    cout<<sum;
    return 0;
}
