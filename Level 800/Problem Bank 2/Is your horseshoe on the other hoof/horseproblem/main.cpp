#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n =4;
    int hs1, hs2, hs3,hs4;
    int counter = 0;

    cin>>hs1>>hs2>>hs3>>hs4;

    set<int>s;

    s.insert(hs1);
    s.insert(hs2);
    s.insert(hs3);
    s.insert(hs4);



    cout<<4 - s.size();
    return 0;
}
