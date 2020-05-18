#include <iostream>

using namespace std;

int main()
{
    int n, h, heights;
    int width= 0;

    cin>>n>>h;

    for(int i =0; i< n; i++)
    {
        cin>>heights;

        if(heights>h)
            width+=2;
        else
            width+=1;


    }

    cout<<width;

    return 0;
}
