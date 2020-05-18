#include <iostream>
#include <algorithm>
using namespace std;



bool isPrime(int n)
{
    int flag = true;
    for(int i = 2; i<=n/2; i++)
    {
        if(n%i ==0)
        {
            flag = false;
            break;
        }


    }

    return flag;


}

int main()
{
    int n, m;
    cin>>n>>m;


    for(int i = n+1; n<=m; i++)
    {

        if(isPrime(i))
        {
            if(i==m)
            {
                cout<<"YES";
                return 0;
            }
            else
            {
                cout<<"NO";
                return 0;
            }


        }

    }

    return 0;
}
