#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"give n value"<<endl;
    cin>>n;
    int row =1;
    char ch ='A';
    
    while (row<=n)
    {
        int col=1;
            

        while (col<=n)
        {
            cout<<char(ch+row+col-2)<<" ";
            col+=1;
            
        }
    cout<<endl;
    row++;
    
        
    }
    














    return 0;
}