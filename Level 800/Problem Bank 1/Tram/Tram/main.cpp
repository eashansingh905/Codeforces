#include <iostream>

using namespace std;

int main()
{
    int stops;
    int newPass=0,oldPass;
    int maximum=0;
    int enter, leave;

    cin>>stops;

    for(int i = 0; i< stops; i++)
    {
        cin>>leave>>enter;

        oldPass = newPass;
        newPass = newPass + enter - leave;
        if(oldPass>newPass && oldPass>maximum)
            maximum = oldPass;
        else if(newPass> oldPass && newPass> maximum)
            maximum = newPass;

    }

    cout<<maximum;

    return 0;
}
