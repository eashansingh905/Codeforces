#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {

        int b ,p, f;
        int buns, chicken, beef;
        cin>>b>>p>>f;
        int h, c;
        cin>>h>>c;

        if(c>h)
        {
            buns = b/2;
            chicken = min(buns,f);
            buns -= chicken;

            beef = min(p,buns);
        }

        else
        {
            buns = b/2;
            beef = min(p,buns);
            buns -= beef;
            chicken = min(buns,f);





        }


        cout<<chicken*c + beef*h<<endl;






    }
    return 0;
}
