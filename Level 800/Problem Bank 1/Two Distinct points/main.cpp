#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;



    while(n--)
    {

        long long int l1,l2,r1,r2;
        cin>>l1>>l2>>r1>>r2;

        if(l1!=r2)
            cout<<l1<<" "<<r2<<endl;
        else
            cout<<l2<<" "<<r2<<endl;



    }
    return 0;
}
