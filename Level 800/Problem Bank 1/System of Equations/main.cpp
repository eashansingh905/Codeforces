#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int a, b;


    int counter= 0;

    for(int b=n; b>=0; b--)
    {
        for(int a = 0; a<=n; a++)
        {

            if((pow(a,2)+ b == n) && (pow(b,2)+ a == m))
                counter++;


        }



    }

    cout<<counter;
    return 0;
}
