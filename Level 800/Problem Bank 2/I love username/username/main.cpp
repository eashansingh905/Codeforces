#include <iostream>

using namespace std;

int main()
{
    int n;
    int counter = 0;
    int maximum = 0, minimum = 0;
    cin>>n;

    int a[n];

    for(int i = 0; i<n; i++)
        cin>>a[i];

    maximum = a[0];
    minimum = a[0];

    for(int i = 1; i<n; i++)
    {
        if(a[i]>maximum)
        {
            maximum = a[i];
            counter++;
        }


        if(a[i]<minimum)
        {
            minimum = a[i];
            counter++;
        }



    }

    cout<<counter;

    return 0;
}
