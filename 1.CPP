#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number n"<<endl;
    cin>>n;
    int x=1;
    while (x<=n)
    {   int y=1;
        while (y<=n)
        {
            cout<<y;
            y=y+1;
        }
    cout<<"\n";
    x=x+1;
    }
return 0;
}
