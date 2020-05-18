#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {

        string a, b, c;
        cin>>a>>b>>c;


        for(int i = 0; i<a.length();i++)
        {

            if(c[i]==a[i] || c[i]==b[i])
            {

            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }

            if(i== a.length()-1)
                cout<<"YES"<<endl;


        }


    }
    return 0;
}
