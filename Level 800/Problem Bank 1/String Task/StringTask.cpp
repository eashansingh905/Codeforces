#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str;


    getline(cin,str);

    for(int i = 0; i< str.length(); i++)
    {

        if((int)str[i]>= 65 && (int)str[i]<=90)
        {
            int newascii = (int)str[i]+32;
            char newchar = char(newascii);
            str[i]= newchar;

        }





    }



    int len = str.length();
    for(int i = 0; i< len; i++)
    {

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y')
        {

            for(int j = i; j<len; j++)
            {
                str[j] = str[j+1];

            }

         len--;
         i--;

        }

    }

    int i = 0;
    string dot = ".";


    for(i = 0;i < len; i++)
    {
        cout<< dot << str[i] ;

    }










    return 0;
}
