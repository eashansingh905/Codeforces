#include <iostream>

using namespace std;

int main()
{
    int n;
    double values,sum=0;
    cin>>n;
    for(int i = 0; i< n; i++)
    {
        cin>>values;
        values = values/100;
        sum+= values;


    }

    cout<<sum/n * 100;

    return 0;
}
