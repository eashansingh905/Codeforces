#include <iostream>

using namespace std;

int main()
{

    int k,n,w;
    int totalCost;
    int borrow;

    cin>>k>>n>>w;


    totalCost = k*(w*(w+1))/2;
    borrow = totalCost-n;

    if(borrow<=0)
        borrow = 0;

    cout<<borrow;




    return 0;
}
