#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {

        int x,y;
        cin>>x>>y;

        if(x==1 || y==1)
                cout<<"YES"<<endl;
        else if(x==2 && y==2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
    return 0;
}
