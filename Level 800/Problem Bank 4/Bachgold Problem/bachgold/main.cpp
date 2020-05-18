#include <iostream>

using namespace std;

int main()
{
    int k;
    int counter = 0;
    int three = 0;
    cin>>k;


    while(k!=0)
    {
        if(k-2 != 1)
        {
            k = k -2;

        }
        else
        {
            k = k-3;
            three++;
        }


        counter++;
    }


    cout<<counter<<endl;
    for(int i =0; i< counter-1; i++)
        cout<<"2 ";

    if(three>0)
        cout<<"3";
    else
        cout<<"2";
    return 0;
}
