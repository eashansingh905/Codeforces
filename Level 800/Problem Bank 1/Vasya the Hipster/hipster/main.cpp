#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    int c = min(a,b);
    int d = (max(a,b) - c)/2;


    cout<<c<<" "<<d;

    return 0;
}
