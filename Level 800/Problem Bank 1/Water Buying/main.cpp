#include <iostream>

using namespace std;

int main()
{
    int q;
    cin>>q;

    while(q--)
    {

        long long int n, a, b;
        cin>>n>>a>>b;


        if(n%2==0)
        {

            if(a*2<b)
            {

                cout<<(n/1) * a<<endl;
            }
            else
                cout<<(n/2) *b<<endl;


        }
        else
        {

            if(a*2<b)
            {

                cout<<(n/1) * a<<endl;
            }
            else
                cout<<a+((n-1)/2)*b<<endl;


        }




    }
    return 0;
}
