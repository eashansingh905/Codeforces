#include <iostream>

using namespace std;

int main()
{
    int n,x,y,z;
    int sumX=0, sumY=0, sumZ=0;
    cin>>n;

    for(int i = 0; i< n; i++)
    {
        cin>>x>>y>>z;
        sumX+= x;
        sumY+= y;
        sumY+= z;
    }

    if(sumX==0 && sumY==0 && sumZ==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
