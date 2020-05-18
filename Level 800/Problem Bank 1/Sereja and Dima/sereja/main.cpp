#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int s = 0;
    int d = 0;
    cin>>n;
    int a[n];

    int pRight = n-1;
    int pLeft = 0;


    for(int i = 0; i<n; i++)
    {
        cin>>a[i];

    }

    for(int i = 0; i<n; i++)
    {
        if(i%2==0){

            if(a[pRight]>a[pLeft])
            {
                s+= a[pRight];
                --pRight;
            }
            else
            {
                s+=a[pLeft];
                pLeft++;
            }


        }
        else
        {
            if(a[pRight]>a[pLeft])
            {
                d+= a[pRight];
                --pRight;
            }
            else
            {
                d+=a[pLeft];
                pLeft++;


            }


        }

    }

    cout<<s<<" "<<d;

    return 0;
}
