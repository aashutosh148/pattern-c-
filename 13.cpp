#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"give value of n\n";
    cin>>n;
    int row=1;
    char ch='a';
    while (row<=n)
    {   
        int col=1;
        while (col<=row)
        {
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
        ch++;

    }
    
}