#include <iostream>

using namespace std;

int main()
{
    int games;
    int a=0;
    int d=0;
    string str;

    cin>>games>>str;



    for(int i =0; i<games; i++)
    {
        if(str[i]=='D')
            d++;
        else
            a++;


    }

    if(a>d)
        cout<<"Anton";
    else if(d>a)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}
