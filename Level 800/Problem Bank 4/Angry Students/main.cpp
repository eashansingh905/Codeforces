#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cCounter=0;
    int mCounter=0;
    while(n--)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
        mCounter = 0;
        cCounter = 0;
        for(int i = 0; i<x-1; i++)
        {
            if(s[i]=='A'&&s[i+1]=='P')
            {

                for(int j = i+1; j<x; j++)
                {
                    if(s[j]=='P')
                        cCounter++;
                    else
                        break;
                }

            }

            if(cCounter>mCounter)
                mCounter = cCounter;

            cCounter = 0;
        }

        cout<<mCounter<<endl;
    }
    return 0;
}
