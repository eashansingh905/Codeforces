#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    vector<int> b;
    set<int>s;

    for(int i= 0; i<n;i++)
    {
        cin>>a[i];


        if(!s.count(a[i]))
        {
             s.insert(a[i]);
             b.push_back(i);
        }
    }

    if(s.size()>= k)
    {
        cout<<"YES"<<endl;

        for(int i=0; i<k; i++)
        {
               cout<<b[i]+1 << " ";
        }
    }
    else
        cout<<"NO";

    return 0;
}
