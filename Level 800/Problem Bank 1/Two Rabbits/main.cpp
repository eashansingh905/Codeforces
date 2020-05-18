#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int x,y,a,b;
    cin>>n;

    while(n--)
    {

        cin>>x>>y>>a>>b;
        long long int distance = y-x;
        if(distance % (a+b)!=0)
            cout<<-1<<endl;
        else
            cout<< distance/(a+b)<<endl;





    }
    return 0;
}
