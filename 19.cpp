#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"give value of n\n";
    cin>>n;
    int row=1;
    while (row<=n)
    {   
        int col=1;
        while (col<=row-1)
        {
            cout<<" ";
            col++;
        }
        int y=1;
        while(y<=n-row+1){
            cout<<"*";
            y++;
        }
    row++;
    cout<<endl;
    }
    return 0;
}