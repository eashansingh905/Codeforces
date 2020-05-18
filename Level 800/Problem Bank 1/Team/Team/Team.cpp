#include <iostream>

using namespace std;

int main()
{
    int n;
    int value;
    int sum = 0;
    int counter = 0;
    cin>> n;

    for( int i = 0; i< n; i++)
    {
        sum = 0;
        for( int j = 0; j< 3; j++)
        {
            cin>>value;
            sum = sum+ value;

        }

        if(sum>=2)
        {

            counter++;
        }
    }

    cout<<counter;

    return 0;
}

