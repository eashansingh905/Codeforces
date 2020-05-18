#include <iostream>

using namespace std;

int main()
{
    int n;
    int chest=0, biceps=0, backs=0;

    cin>>n;
    int value;

    for(int i = 1; i<=n; i++)
    {
       cin>>value;

       if(i%3==1)
            chest+=value;
       else if(i%3==2)
            biceps+=value;
       else
            backs+=value

    }


    if(chest> biceps && chest > backs)
        cout<<"chest";
    else if(biceps> chest && biceps > backs)
        cout<<"biceps";
    else
        cout<<"back";


    return 0;
}
