#include <iostream>

using namespace std;

int main()
{
        long long int n;
        cin>>n;


        long long int a = (n*(n+1))/2;

        if(a%2==0)
            cout<<0;
        else
            cout<<1;

        return 0;
}
