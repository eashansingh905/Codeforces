#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counter = 0;
    int gap = 1;

    while(counter<n)
    {
        cout<<s[counter];
        c+= gap;
        gap++;
    }
    return 0;
}
