#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    int num = 6 - max(x,y) +1;
    int dem = 6;

    if(num%6==0)
    {
        num /=6;
        dem /=6;
    }

    if(num%2==0)
    {
        num /=2;
        dem /=2;
    }
    if(num%3==0)
    {
        num /=3;
        dem /=3;
    }

    cout<<num<<"/"<<dem;
    return 0;
}
