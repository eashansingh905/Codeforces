#include <iostream>

using namespace std;

int main()
{
    int upper = 0;
    int lower = 0;
    string str;
    cin>>str;

    int len = str.length();

    for(int i=0; i< len; i++)
    {
        if(str[i]>=97 and str[i]<=122)
            lower++;
        else
            upper++;

    }

    if(upper>lower)
    {
        for( int i = 0; i<len; i++)
        {
            if(str[i]>=97 and str[i]<=122)
                str[i]= str[i]-32;

        }


    }
    else
    {
        for( int i = 0; i<len; i++)
        {
            if(str[i]>=65 and str[i]<=90)
                str[i]= str[i]+32;

        }



    }

    cout<<str;
    return 0;
}
