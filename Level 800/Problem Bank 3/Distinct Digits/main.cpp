#include <iostream>

using namespace std;

int dDigits(int n)
{
    int a[10] = {0};

    while(n!=0)
    {
        int remainder = n%10;
        a[remainder]++;
        n /= 10;

        if(a[remainder]>1)
            return 0;

    }

    return 1;


}
int main()
{
    int x, y;
    cin>>x>>y;


    while(x<=y && !dDigits(x))
    {

        x++;
    }

    if(x>y)
        cout<<-1;
    else
        cout<<x;

    return 0;
}
