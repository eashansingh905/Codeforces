#include <iostream>

using namespace std;

int main()
{

    int y;
    int thousands;
    int hundreds;
    int tens;
    int ones;


    cin>>y;
    y++;

    thousands = y/1000;
    hundreds = y/100 - thousands* 10;
    tens = y/10 - thousands* 100 - hundreds* 10;
    ones = y%10;


    while( thousands==hundreds || thousands== tens || thousands== ones || hundreds== tens || hundreds==ones || tens== ones)
    {
        y++;

        thousands = y/1000;
        hundreds = y/100 - thousands* 10;
        tens = y/10 - thousands* 100 - hundreds* 10;
        ones = y%10;


    }

    cout<<y;

    return 0;
}
