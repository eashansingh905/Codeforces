#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;

   while(n--)
   {

       string s;
       cin>>s;
       int l = s.length();
       int counter = 0;
       for(int i = 1; i<l; i++)
       {

            if(s[i]=='0' && s[i-1]=='1')
            {
                counter++;
                for(int j = i; j<l; j++)
                {
                    if(j==l-1)
                    {
                      if(s[l-1]!='1')
                        {
                            counter -= l-i;
                        }
                    }

                    if(s[j]=='0' && s[j+1]=='0')
                        counter++;
                    if(s[j]=='0' && s[j+1]=='1')
                        break;

                }
            }



       }
        cout<<counter<<endl;



   }
    return 0;
}
