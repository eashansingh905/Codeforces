#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x, y;
    cin>>x;
    int a[x];

    for(int i = 0; i<x; i++)
        cin>>a[i];

    cin>>y;
    int b[y];

    for(int i = 0; i<y; i++)
        cin>>b[i];


    sort(a, a+ x);
    sort(b, b+ y);

    cout<<a[x-1]<<" "<<b[y-1];


    return 0;
}
