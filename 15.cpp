#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"give value of n\n";
    cin>>n;
    int row=0;
    
    while (row<=n-1)
    {   char ch='A'+row;
        int col=0;
        while (col<=row)
        {
            cout<<ch<<" ";
            col++;
            ch++;
        }
        cout<<endl;
        row++;
        

    }
    
}