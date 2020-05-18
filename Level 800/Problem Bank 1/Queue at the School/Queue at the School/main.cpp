#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, t;
    string order;

    cin>>n>>t>>order;




    while(t--)
    {

        for( int i = 1; i<n; i++)
        {

            if(order[i]=='G' && order[i-1]=='B')
            {
                order[i]='B';
                order[i-1]='G';
                ++i;

            }



        }

    }

    cout<<order;
    return 0;
}
