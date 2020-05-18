#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int sum = 0;
        int value = 0;
        int l;
        int counter = 0;
        cin>>l;

        for(int i=0; i<l; i++)
        {
            cin>>value;
            if(value==0)
            {
                ++value;
                counter++;

            }


            sum+= value;
        }


        if(sum==0)
            cout<<counter+1<<endl;
        else
            cout<<counter<<endl;

    }
    return 0;
}
