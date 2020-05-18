#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int bGroups = 0;
    int counter = 0;
    int len = s.length();


    for(int i = 0; i<len; i++)
    {
       if(s[i]=='B'&& ((s[i+1]=='W') || (i == len-1)))
        {
            bGroups++;
        }
    }


    cout<<bGroups<<endl;

    for(int i = 0; i<len; i++)
    {

        if(s[i]=='B')
        {
            counter++;

            if(i==len-1)
                cout<<counter<<" ";
            else if(s[i+1]=='W' )
            {
                cout<<counter<<" ";
                counter = 0;
            }


        }



    }


    return 0;
}
