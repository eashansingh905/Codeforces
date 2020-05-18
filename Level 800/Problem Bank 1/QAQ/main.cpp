#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum =0;
    int len = s.size();

    for(int i = 0; i<len; i++)
    {
        for(int j = i+1; j< len; j++)
        {
            for(int k= j+1; k<len; k++)
            {
                if(s[i]=='Q' && s[j]=='A' && s[k]=='Q')
                    sum++;
            }

        }

    }


    cout<<sum;




    return 0;
}
