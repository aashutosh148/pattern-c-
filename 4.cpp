#include <iostream>
using namespace  std;
int main (){
    int n;
    cout<<"give n\n";
    cin>>n;
    int x=1;
    while (x<=n)
    {   int y=1;
        while (y<=x)
        {
            cout<<"*";
            y=y+1;
        }
    cout<<"\n";
    x=x+1;
    }
//return 0; this statement may or may not be required
}
