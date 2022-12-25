// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"value of n\n";
//     cin>>n;
    
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         char ch='a'+n-1;
//         ch=ch-row+1;
//         while(col<=row){
//             cout<<ch;
//             col++;
//             ch++;
//         }
//         cout<<endl;
//         row++;
//     }
// return 0;
// }
//**************************************************OTHER METHOUD*************************************
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"value of n\n";
    cin>>n;
    
    int row=1;
    while (row<=n)
    {
        int col=1;
        char ch='a'+n-row;
        
        while(col<=row){
            cout<<ch;
            col++;
            ch++;
        }
        cout<<endl;
        row++;
    }
return 0;
}