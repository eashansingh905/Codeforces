#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double prizes = 0;
    double medals = 0;
    int rows = 0;
    int amount = 0;

    for(int i = 0; i<3; i++)
    {
        cin>>amount;
        prizes+= amount;

    }
    for(int i = 0; i<3; i++)
    {
        cin>>amount;
        medals+= amount;

    }
    cin>>rows;


    int j = ceil(medals/10) + ceil(prizes/5);

    if(j>rows)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
