#include <iostream>

using namespace std;

int main()
{
    string str;
    string hello = "hello";
    cin>>str;

    int j = 0;
    int pass = 0;

    int x = str.length();

    for( int i=0 ; i< x; i++)
    {

        if(str[i]==hello[j])
        {
            j++;
            pass++;

            if(pass==5){
                break;
            }

        }



    }

    if(pass==5)
    {
        cout<<"YES";

    }
    else
        cout<<"NO";




    return 0;
}
