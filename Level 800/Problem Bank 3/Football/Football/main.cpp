#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin>>str;

    string zero = "0000000";
    string one = "1111111";


    int zeroFound = str.find(zero);
    int oneFound = str.find(one);


    if(zeroFound>=0 || oneFound>=0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
