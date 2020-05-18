#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int l;
        int counter = 0;
        cin>>l;
        vector<int> a;

        for(int i = 0; i<l; i++)
        {
            int value;
            cin>>value;
            a.push_back(value);
        }

        for(int i = 0; i<l-1; i++)
        {

            for(int j = i+1; j<=l-1; j++)
            {
                if(abs(a[j]-a[i])==1)
                {
                    counter++;

                }


            }
        }



        if(counter>0)
            cout<<2<<endl;
        else
            cout<<1<<endl;

        a.clear();
    }

    return 0;
}
