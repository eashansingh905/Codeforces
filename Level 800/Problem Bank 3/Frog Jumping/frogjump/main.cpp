#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        long long int position= 0;
        long long a, b, k;
        cin>>a>>b>>k;

        if(k&1)
            position = ceil(k/2.0)*a - floor(k/2.0)*b;
        else
            position = (k/2)* (a-b);

        cout<<position<<endl;




    }
    return 0;
}
