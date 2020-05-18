#include <iostream>

using namespace std;

int main()
{
    int x, y,z;
    int a,b,c;

    cin>>x>>y>>z>>a>>b>>c;


    if(a>=x && (a-x+b)>=y && (a+b+c -x -y)>= z)
        cout<<"YES";
    else
        cout<<"NO";


    return 0;
}
