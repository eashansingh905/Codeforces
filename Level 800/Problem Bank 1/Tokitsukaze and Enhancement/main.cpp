#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n%4 ==1)
        cout<<0<<" "<<"A";
    else if(n%4 ==2)
        cout<<1<<" "<<"B";
    if(n%4 ==3)
        cout<<2<<" "<<"A";
    if(n%4 ==0)
        cout<<1<<" "<<"A";
    return 0;
}
