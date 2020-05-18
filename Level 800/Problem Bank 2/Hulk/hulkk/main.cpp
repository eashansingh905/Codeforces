#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string str1 = "I love";
    string str2 = "I hate";

    for(int i =0; i<n; i++)
    {
        if(i & 1 )
            cout<<str1<<" ";
        else
            cout<<str2<<" ";

        if(i != n-1)
            cout<<"that ";



    }

    cout<<"it"<<endl;

    return 0;



}
