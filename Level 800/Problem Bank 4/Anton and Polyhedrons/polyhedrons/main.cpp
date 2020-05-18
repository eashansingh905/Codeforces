#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, sum=0;
    cin>>n;
    string str;


    for(int i =0; i<n; i++)
    {

        cin>>str;


        if(str.compare("Tetrahedron")==0)
            sum += 4;
        if(str.compare("Cube")==0)
            sum += 6;

        if(str.compare("Octahedron")==0)
            sum += 8;

        if(str.compare("Dodecahedron")==0)
            sum += 12;

        if(str.compare("Icosahedron")==0)
            sum += 20;




    }


    cout<<sum;
    return 0;
}
