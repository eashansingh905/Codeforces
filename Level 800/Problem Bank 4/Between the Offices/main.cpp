#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sf = 0;
    int fs = 0;

    if(n==2)
    {
        if(s[0]=='S' && s[1]=='F')
            cout<<"YES";
        else
            cout<<"NO";

        return 0;


    }

    for(int i = 0; i<n-1; i++)
    {
        if(s[i]=='S' && s[i+1]=='F')
            sf++;
        else if(s[i]=='F' && s[i+1]=='S')
            fs++;


    }

    if(sf>fs)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
