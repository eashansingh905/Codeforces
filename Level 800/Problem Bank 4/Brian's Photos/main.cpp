#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    char value;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin>> value;

            if(value=='C'||value== 'M' || value == 'Y')
            {
                cout<<"#Color";
                return 0;
            }
        }
    }

    cout<<"#Black&White";
    return 0;
}
