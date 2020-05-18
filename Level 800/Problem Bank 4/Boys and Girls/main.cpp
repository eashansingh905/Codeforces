#include <iostream>
#include <string>

using namespace std;

int main()
{
    int counter = 0;
    int uniques=0;
    string str;
    cin>>str;

    int len= str.length();

    for( int i = 0; i< len; i++)
    {
        counter = 0;
        for( int j = 0; j< i; j++)
        {
            if(str[i]==str[j])
                counter++;

        }
        if(counter==0)
            uniques++;
    }




    if(uniques%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
