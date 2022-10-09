#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"give n\n";
    cin>>n;
    int x=1;
    int z=1;

    while (x<=n)
    {   int y=1;
        while (y<=n)
        {
            cout<<z<<",";
            z=z+1;
            y=y+1;

        }
    cout<<endl;
    x=x+1;

    }
    
    return 0;
}