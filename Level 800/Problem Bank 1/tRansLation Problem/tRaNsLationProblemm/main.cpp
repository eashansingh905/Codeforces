#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str1;
    string str2;

    cin>>str1>>str2;

    /*
    for(int i = 0; i<str1.length();i++)
    {
        if(str1[i]!=str2[str1.length()-i-1])
        {
            cout<<"NO";
            return 0;
        }




    }

    cout<<"YES";

    */

    reverse(str2.begin(),str2.end());
    if(str1==str2)
        cout<<"YES";
    else
        cout<<"NO";


    return 0;
}
