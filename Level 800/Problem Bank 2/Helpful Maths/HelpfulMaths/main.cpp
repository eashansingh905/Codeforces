#include <iostream>

using namespace std;

int main()
{
    string str;
    char arr[100];
    int k=0;
    cin>>str;

    int x = str.length();

    for(int i = 1; i<= x; i++)
    {
        if(i%2!=0)
        {

            arr[k]= str[i-1];
            k++;
        }

    }



    for(int i = 0; i< k; i++)
    {
      for( int j= 0; j< k-i-1; j++)
      {
          if(arr[j]>arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

        }

      }


    }



    for(int i = 0; i<k; i++)
    {
         if(i==k-1)
            cout<<arr[i];
         else
          cout<<arr[i]<<"+";

    }


    return 0;
}
