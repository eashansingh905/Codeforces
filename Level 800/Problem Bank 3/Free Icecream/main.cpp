#include <iostream>

using namespace std;

int main()
{
    long long int n, d;
    cin>>n>>d;
    long long sum = d;
    char sign;
    long long value;
    int stress= 0;
    while(n--)
    {

        cin>>sign;
        cin>>value;


        if(sign=='-')
        {
            if(sum-value<0)
                stress++;
            else
                sum -= value;
        }
        else
            sum+=value;





    }

    cout<<sum<<" "<<stress;
    return 0;
}
