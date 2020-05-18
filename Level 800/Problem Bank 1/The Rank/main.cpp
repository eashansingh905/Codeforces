#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    int a,b,c,d;

    for(int i = 0; i<n; i++)
    {
        cin>>a>>b>>c>>d;
        arr[i] = a+b+c+d;
    }

    int ranking = n;
    for(int i = 1; i<n; i++)
    {
        if(arr[0]>arr[i])
            --ranking;
        else if(arr[0]==arr[i])
            --ranking;
        else
        {

        }


    }

    cout<<ranking;
    return 0;
}
