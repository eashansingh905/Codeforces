#include <iostream>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int counter=0;
    for(int i = 0; i<b.size(); i++)
    {
        if(b[i]==a[counter])
            counter++;

    }

    cout<<counter+1;
    return 0;
}
