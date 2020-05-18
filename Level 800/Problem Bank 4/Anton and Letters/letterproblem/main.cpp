#include <iostream>
#include <set>
#include <math.h>


using namespace std;

int main()
{

     set<char> s;
     string s1;
     getline(cin,s1);

     int n = s1.length();


     for(int i =0; i<n; i++)
     {
        if(isalpha(s1[i]))
        {
            s.insert(s1[i]);

        }
     }

     cout<<s.size();


    return 0;
}
