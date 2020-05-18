#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin>>n;


    while(n--)
    {
        set<int> s;
        long int length;
        int value;
        cin>>length;

        for(int i = 0; i<length;i++)
        {
            cin>> value;
            s.insert(value);
        }


        cout<<s.size()<<endl;

    }
    return 0;
}
