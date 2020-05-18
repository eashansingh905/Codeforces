#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int s=-1;

    for(int i = 0; i<n; i++)
        cin>>a[i];


    int counter = 0;

    for(int i =0; i<n; i++)
    {
        s = i;
        if(a[i]<=k)
        {
            counter++;

        }
        else
        {

            break;
        }

    }



    if(s>-1)
    {

        for(int i= n-1; i>s;i--)
        {
            if(a[i]<=k)
            {
                counter++;
            }
            else
            {
                break;

            }


        }

    }


    cout<<counter;


    return 0;
}
