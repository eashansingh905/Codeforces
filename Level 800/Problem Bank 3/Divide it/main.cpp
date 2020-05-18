#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;

   while(n--)
   {
      long long int x;
      cin>>x;

      long long int counter = 0;
      while(x!=1)
      {

          if(x%2==0)
            x /= 2;
          else if(x%3==0)
            x = (x*2)/3;
          else if(x%5==0)
            x = (x*4) /5;
          else
          {
              break;
          }

          counter++;
      }

      if(x==1)
        cout<<counter<<endl;
      else
        cout<<-1<<endl;

    }



    return 0;
}
