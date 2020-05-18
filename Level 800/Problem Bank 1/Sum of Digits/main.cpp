#include <iostream>

using namespace std;



int sumOfDigits(int n)
{
    int sum = 0;
    int remainder = 0;

    while(n!=0)
    {
        remainder = n%10;
        sum += remainder;
        n /= 10;

    }

    return sum;

}
int main()
{
    int a;
    cin>>a;

    int val = sumOfDigits(a);

    while(val%4!=0)
    {
        a++;
        val = sumOfDigits(a);
    }

    cout<<a;
    return 0;
}
