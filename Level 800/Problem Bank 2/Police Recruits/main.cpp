#include <iostream>

using namespace std;

int main()
{
   int n;
   int sum = 0;
   int crime = 0;
   cin>>n;

   int a[n];

   for(int i = 0; i<n; i++)
    cin>>a[i];

   for(int i = 0; i<n; i++)
   {

       sum+= a[i];

       if(sum<0)
       {
           crime++;
           sum = 0;
       }


   }

   cout<<crime;
    return 0;
}
