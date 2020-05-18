#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b;
    cin>>a;

    for(int i = 0 ; i<a; i++)
    {
        cin>>b;
        int total = 0;
        for(int i = 1; i<=b; i++)
        {
            total+= pow(2,i);
        }
        int d = b/2;
        int s = 0;
        for(int i = d; i<=b-1; i++)
        {
            s+= pow(2,i);
        }

        int s2 = total -s;

        cout<<s2-s<<endl;
    }


    return 0;
}
