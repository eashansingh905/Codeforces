#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    set<int>a;



    int total = m;

    while(n--)
    {

       int x,y;
       cin>>x>>y;

       for(int i=x; i<=y; i++)
       {
           a.insert(i);
       }




    }

    cout<<m-a.size()<<endl;

    for(int i=1; i<=m; i++)
    {

        if(!a.count(i))
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
