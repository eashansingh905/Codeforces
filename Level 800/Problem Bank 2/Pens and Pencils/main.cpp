#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;


    while(n--)
    {
        double a, b,c,d,k;
        cin>>a>>b>>c>>d>>k;

        double pens = ceil(a / c);
        double pencils = ceil(b / d);

        double total = pens + pencils;

        if(total>k)
            cout<<-1<<endl;
        else
            cout<<pens<<" "<<pencils<<endl;


    }

    return 0;
}
