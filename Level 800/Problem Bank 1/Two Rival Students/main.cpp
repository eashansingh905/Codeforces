#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {

        int n, x, a, b;
        cin>>n>>x>>a>>b;

        int distance = abs(a-b)+x;

        if(distance >=n)
            cout<<n-1<<endl;
        else
            cout<<distance<<endl;




    }
    return 0;
}
