#include <iostream>

using namespace std;

int main()
{
    int k, r;
    cin>>k>>r;

    int sum = k;
    int counter = 1;
    while(true)
    {
        if(sum%10==0 || sum%10 == r)
            break;

        sum+=k;
        counter++;
    }

    cout<<counter;
    return 0;
}
