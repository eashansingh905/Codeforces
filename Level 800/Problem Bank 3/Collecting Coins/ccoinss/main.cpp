#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[3];

    for(int i = 0; i<n; i++)
    {

        for(int i = 0; i<3; i++)
            cin>>a[i];

        sort(a,a+3);

        int diff = a[2]- a[1] + a[2] - a[0];

        int y;
        cin>>y;

        if(y-diff<0)
        {
            cout<<"NO"<<endl;
            continue;
        }

        else
        {

            if((y-diff)%3 ==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;



        }




    }
    return 0;
}
