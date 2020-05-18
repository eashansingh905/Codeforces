#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int n;
    cin>>n;

    while(n--)
    {
        cin>>a>>b;

        if(a==b)
            cout<<0<<endl;
        else if(a>b)
        {
            int difference = a-b;

            if(difference%2==0)
                cout<<1<<endl;
            else
                cout<<2<<endl;

        }
        else
        {
            int difference = b-a;

            if(difference&1)
                cout<<1<<endl;
            else
                cout<<2<<endl;


        }

    }

    return 0;
}
