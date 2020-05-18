#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum = 0;
    int d = 0;
    int l = s.length();
    char prev = 'a';
    for(int i = 0; i<l; i++)
    {
        d = abs(s[i]- prev);
        if(d<=13)
            sum+=d;
        else
            sum+=26-d;

        prev = s[i];

    }

    cout<<sum;
    return 0;
}
