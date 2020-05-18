#include <iostream>

using namespace std;

int main()
{
    int n,value;
    int minimum, maximum;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>value;
        arr[i]= value;



    }

    minimum = 0;
    maximum = 0;
    for(int i=1; i<n; i++)
    {

        if(arr[minimum]>=arr[i])
        {
            minimum = i;
        }

        if(arr[maximum]<arr[i])
        {
            maximum = i;
        }


    }

    if(maximum<minimum)
    {
        cout<<(maximum-0)+ (n-minimum-1);
    }
    else
        cout<<(maximum-0)+ (n-minimum-2);





    return 0;
}
