#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n, m;


    while(t--)
    {
        cin>>n>>m;
        if(n%m==0)
        {
            cout<<"YES"<<endl;

        }
        else
            cout<<"NO"<<endl;
    }



    return 0;
}
