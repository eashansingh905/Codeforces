#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    int x = a*b + 2*d;
    int y = a*c + 2*e;


    if(x<y)
        cout<<"First";
    else if(y<x)
        cout<<"Second";
    else
        cout<<"Friendship";
    return 0;
}
