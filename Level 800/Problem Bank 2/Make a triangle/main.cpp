#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3];

    for(int i = 0; i<3; i++)
        cin>>arr[i];


    sort(arr, arr+3);

    if(arr[0]+arr[1]>arr[2])
        cout<<0;
    else
        cout<<arr[2]-arr[1]-arr[0]+1;

    return 0;
}
