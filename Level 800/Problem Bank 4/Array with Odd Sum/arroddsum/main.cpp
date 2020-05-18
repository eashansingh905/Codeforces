#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int a;
        int value;
        int counter = 0;
        cin>>a;
        if(a%2==0)
        {
            for(int i=0; i<a; i++)
            {
                cin>> value;
                if(value&1)
                    counter++;

            }

            if(counter==0 || counter ==a)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            for(int i=0; i<a; i++)
            {
                cin>> value;
                if(value&1)
                    counter++;
            }

            if(counter>0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }


    }
    return 0;
}
