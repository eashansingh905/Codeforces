#include <iostream>

using namespace std;

int nBlock(int n)
{
   if(n==2)
        return 5;
   else
        return nBlock(n-1)+ 4*(n-1);


}

int main()
{
    int n;
    cin>>n;

    if(n==1)
        cout<<1;
    else
    {
        int a = nBlock(n);

        cout<<a;
    }
    return 0;
}
