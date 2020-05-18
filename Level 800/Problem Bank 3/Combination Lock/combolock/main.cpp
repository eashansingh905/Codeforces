#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s1;
    string s2;

    cin>>s1>>s2;
    int sum = 0;

    for(int i = 0; i<n; i++)
    {
        int difference = abs(s1[i]-s2[i]);

        if(difference>5)
            sum+=10- difference;
        else
            sum+= difference;

    }

    cout<<sum;


    return 0;
}
