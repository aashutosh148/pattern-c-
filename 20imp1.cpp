#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"give vlue of n\n";
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=n-row)
        {
            cout<<" ";
            col++;
        }
        int x=1;
        while (x<=row)
        {
            cout<<x;
            x++;
        }
        int y=1;
        int z=1;
        while (y<=row-1)
        {
            cout<<row-y;
            y++;
        }
        
        row++;
        cout<<endl;
        
    }
    
    return 0;
}