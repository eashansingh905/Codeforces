#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    string s;
    string s1;
    cin>>s;

    for(int i= 0; i<n; i++)
    {
        cin>>s1;
        if(s[0]==s1[0] || s[1]==s1[1])
        {

            cout<<"YES";
            return 0;
        }


    }

    cout<<"NO";
    return 0;
}
