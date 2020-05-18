#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int x = s.length();
    int counter = 0;


    for(int i = 0; i<x; i++)
    {
        if(s[i]=='a')
            counter++;
    }

    if(x%2!=0)
    {

        if(counter>=(x/2)+1)
            cout<<x;
        else
            cout<<counter+(counter-1);


    }
    else
    {

         if(counter>x/2)
            cout<<x;
         else
            cout<<counter+(counter-1);

    }
    return 0;
}
