#include <iostream>

using namespace std;

int main()
{
    int n , k;
    cin>>n>>k;

    int tLeft = 240 - k;
    int problems=0;
    int sum = 0;

    for(int i = 1; i<= n; i++)
    {
        sum += 5*i;

        if(sum>tLeft)
            break;

        problems++;

    }

   cout<<problems;
    return 0;
}
