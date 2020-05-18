#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    int f = 0, s =0, d=0;

    for(int i = 1; i<=6; i++)
    {

        if(abs(a-i) < abs(b-i))
            f++;
        else if(abs(b-i)<abs(a-i))
            s++;
        else
            d++;

    }
    cout << f << " " << d << " " << s << endl;
    return 0;
}
