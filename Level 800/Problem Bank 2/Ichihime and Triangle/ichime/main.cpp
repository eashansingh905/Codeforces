#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[4];
    while(n--)
    {

        cin>>a[0]>>a[1]>>a[2]>>a[3];

        int s1 = a[1];
        int s2 = a[2];
        int s3= a[2];

       cout<<s1<< " "<< s2<< " "<< s3<<endl;

    }


    return 0;
}
