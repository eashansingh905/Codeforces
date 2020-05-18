#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n][5];

    for(int i = 0; i<n; i++)
     {
         for(int j= 0; j<5; j++)
         {
             cin>>a[i][j];
         }

     }


     bool flag = 0;

     for(int i = 0; i<n; i++)
     {

         if(a[i][0] == 'O' && a[i][1] == 'O')
         {
             a[i][0] = a[i][1] = '+';
             flag = 1;
             break;
         }
         else if (a[i][3] == 'O' && a[i][4] == 'O')
         {
             a[i][3] = a[i][4] = '+';
             flag = 1;
             break;
         }


     }

     if(!flag) printf("NO\n");
     else{

       cout<<"YES"<<endl;

       for(int i = 0; i<n; i++){


        for(int j = 0; j<5; j++){

            cout<<a[i][j];


        }
        cout<<endl;
       }



     }



     return 0;
}
