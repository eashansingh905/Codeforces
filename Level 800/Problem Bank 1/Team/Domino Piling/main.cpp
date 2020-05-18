#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m, n;

    cin>> m >> n;

    if((m*n)%2 == 0)
        cout<<m*n/2;
    else
        cout<<floor((m*n)/2);

    return 0;
}
