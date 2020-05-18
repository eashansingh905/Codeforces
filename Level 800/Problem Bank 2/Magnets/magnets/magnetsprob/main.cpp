#include <iostream>

using namespace std;

int main()
{
    int x;
    int prev,next;
    int group = 0;

    cin>>x;
    cin>>next;
    x= x-1;

    while(x--)
    {
        prev = next;
        cin>> next;

        if((next==10 && prev == 10) || (next==01 && prev == 01))
        {

        }
        else
        {
            group++;
        }


    }
    group++;

    cout<<group;
    return 0;
}
