#include <iostream>

using namespace std;

int main()
{
    int n;
    int value;
    int sumLeft = 0;
    cin>>n;


    while(n--)
    {
       sumLeft = 0;
       cin>>value;
       if((value ==2) || ((value/2) %2 !=0))
        cout<<"NO"<<endl;
       else
       {
           cout<<"YES"<<endl;


           for(int i = 1; i<= value/2; i++)
           {
                sumLeft+= i*2;
                cout<<i*2<<" ";
           }

           for(int i = 1; i<= value/2; i++)
           {
               if(i!=value/2)
               {
                   sumLeft -= (i*2) -1;
                   cout<< (i*2) -1 <<" ";
               }

               else
               {
                   cout<<sumLeft<<endl;

               }

           }




       }



       }





    return 0;
}
