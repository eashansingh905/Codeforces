#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    string a[n];
    string b[m];

    for(int i =0; i<n; i++)
        cin>>a[i];
    for(int i = 0; i<m; i++)
        cin>>b[i];

    int x;
    cin>>x;

    while(x--)
    {

       int y;
       cin>>y;

       if(y>=n)
        {
            if(y%n==0)
                cout<<a[n-1];
            else
                cout<<a[(y%n)-1];



        }
        else
        {

            cout<<a[(y%n)-1];



        }


        if(y>=m)
        {
            if(y%m==0)
                cout<<b[m-1]<<endl;
            else
                cout<<b[(y%m)-1]<<endl;



        }
        else
        {

            cout<<b[(y%m)-1]<<endl;



        }











    }

    return 0;
}
