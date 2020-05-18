#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counter =0;
    int x = 0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='x')
        {
            counter++;

            if(counter>=3)
                x++;
        }

        else
            counter=0;

    }

    cout<<x;


    return 0;
}
