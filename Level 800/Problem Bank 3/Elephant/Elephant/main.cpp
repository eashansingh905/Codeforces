#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int counter=0;

    while(x!=0)
    {

        if(x>=5)
        {
            x= x-5;
            counter++;
        }
        else if(x==4)
        {
            x = x-4;
            counter++;

        }
        else if(x==3)
        {
            x = x-3;
            counter++;

        }
        else if(x==2)
        {
            x = x-2;
            counter++;

        }
        else
        {

            x = x-1;
            counter++;

        }


    }

    cout<<counter;
    return 0;
}
