#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s =0;
    int s2 = 0;
    int c = 1;
    int h = 0;
    while(s2<n)
    {
        s+= c;
        s2+=s;
        h++;
        c++;


    }

    if(s2>n)
        h--;

    cout<<h;
    return 0;
}
