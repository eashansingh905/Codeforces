#include <iostream>

using namespace std;

int main()
{

int n;
cin>>n;

    if(((n%4)==0)||((n%7)==0)||((n%47)==0)||((n%74)==0)||((n%474)==0)||((n%447)==0)||((n%774)==0)||((n%777)==0)||((n%444)==0)||((n%44)==0)||((n%77)==0)||((n%477)==0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    n=0;

    return 0;
}