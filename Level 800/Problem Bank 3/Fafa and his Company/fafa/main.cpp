#include <iostream>

using namespace std;

int main()
{
    int n;
    int counter =0;
    cin>>n;

    for(int i = 1; i <n; i++)
    {
        if(n%i==0)
            counter++;
    }

    cout<<counter;
    return 0;
}
