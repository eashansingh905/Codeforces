#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, k;
    int value=0;
    double sum=0;
    cin>>n;

    while(n--)
    {
        sum=0;
        cin>>k;
        for(int i=0; i<k; i++)
        {
            cin>>value;
            sum+=value;
        }

        int p = ceil(sum/k);

        cout<<p<<endl;



    }
    return 0;
}
