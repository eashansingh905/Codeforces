#include <iostream>

using namespace std;

int main()
{
    int a, i,x=0;
    string str;
    string str1 = "X++";
    string str2 = "++X";
    string str3 = "--X";
    string str4 = "X--";

    cin>>a;
    cin>>ws;

    for(i=0; i< a; i++)
    {
        getline(cin,str);


        if((str.compare(str1))==0 || (str.compare(str2))==0 )
        {
            x++;


        }

        if((str.compare(str3))==0 || (str.compare(str4))==0 )
        {
            x--;

        }



    }

    cout<<x;
    return 0;
}
