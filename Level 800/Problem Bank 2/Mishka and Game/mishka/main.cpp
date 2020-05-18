#include <iostream>

using namespace std;

int main()
{
    int n;
    int x,y;
    int m = 0;
    int c = 0;
    cin>>n;

    while(n--)
    {
        cin>>x>>y;

        if(x>y)
            m++;
        if(y>x)
            c++;







    }

    if(m>c)
        cout<<"Mishka";
    else if(c>m)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";

    return 0;

}
