#include <iostream>

using namespace std;

int main()
{
    long int a,b;
    cin>>a>>b;
    int p=1;
    int m = min(a,b);

    for(int i=1; i<=m; i++)
    {
        p*=i;
    }
    cout<<p;
    return 0;
}
