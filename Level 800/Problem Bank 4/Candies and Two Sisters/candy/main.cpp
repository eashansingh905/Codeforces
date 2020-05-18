#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    double candy;
    int a = 0, b = 0;
    int perm = 0;
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        a = 0;
        b = 0;
        perm = 0;
        cin>>candy;

        if(candy<3)
            cout<<0<<endl;

        else{

            int perm = ceil(candy/2) -1;
            cout<<perm<<endl;

        }






    }
    return 0;
}
