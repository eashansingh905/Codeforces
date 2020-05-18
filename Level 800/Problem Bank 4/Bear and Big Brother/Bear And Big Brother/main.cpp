#include <iostream>

using namespace std;

int main()
{
    int x ,y;
    int counter = 0;
    cin>>x>>y;

    while(y>=x)
    {
        y= y*2;
        x= x*3;
        counter++;

    }

    cout<<counter;
    return 0;
}
