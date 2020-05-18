#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int i, j, xPos, yPos,value, steps;

    for(i = 1; i<=5; i++ )
    {
        for(j =1; j<= 5; j++)
        {
           cin>>value;
           if(value==1)
           {
               xPos = j;
               yPos = i;

           }

        }



    }


    steps = abs(xPos-3) + abs(yPos-3);
    cout<<steps;
    return 0;
}
