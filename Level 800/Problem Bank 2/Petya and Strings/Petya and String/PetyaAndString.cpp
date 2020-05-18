#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1;
    string str2;
    string str3;
    string str4;
    int z,y;

    cin>>str1>> str2;


    z= str1.length();
    y= str2.length();

    for(int i = 0; i< z; i++)
    {

        if((int)str1[i]>= 65 && (int)str1[i]<=90)
            str1[i] = str1[i]+32;


    }

    for(int i = 0; i< y; i++)
    {

        if((int)str2[i]>= 65 && (int)str2[i]<=90)
            str2[i] = str2[i]+32;


    }

    cout<<str1.compare(str2);

    return 0;
}
