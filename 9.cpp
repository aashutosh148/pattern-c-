#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"give value of n"<<endl;
    cin>>n;
    int row=1;
    char p='A';
    while (row<=n)
    {   int col=1;
        
        while (col<=n)
        {   
            cout<<p<<" ";
            col=col+1;
            if (col==n)
            {
                p=p+1;
            }
            
        }
        cout<<endl;
        row=row+1;
        
    }

    return 0;
}