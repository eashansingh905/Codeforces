#include <iostream>

using namespace std;

int main()
{
    long long  n;
    int lastDig;
    int counter =0;
    cin>>n;


    long long  k = n;
    while(k!=0)
    {
        lastDig= k%10;
        if(lastDig==7 || lastDig==4)
        {
            counter++;
        }

        k = k/10;
    }

    while(counter!=0)
    {

        lastDig= counter%10;
        if(lastDig==7 || lastDig==4)
            counter = counter/10;
        else
            break;

    }

    if(lastDig==4 || lastDig==7)
    {
        cout<<"YES";
        return 0;
    }


    while(n!=0)
    {

        lastDig= n%10;
        if(lastDig==7 || lastDig==4)
        {
            n = n/10;
        }
        else
        {

            cout<<"NO";
            return 0;
        }




    }


    cout<<"YES";


    return 0;
}

