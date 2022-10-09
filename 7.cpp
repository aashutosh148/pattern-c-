// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"give value of n\n";
//     cin>>n;
//     int x=1;
//     while (x<=n)
//     {   int y=1;
//         int p=x;
//         while (y<=x)
//         {
//             cout<<p;
//             p=p+1;
//             y=y+1;
//         }
//     cout<<endl;
//     x=x+1;
        
//     }
//     return 0;
// }

// *************************************OTHER METHOUDD **********************************


// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"give value of n\n";
//     cin>>n;
//     int x=1;
//     while (x<=n)
//     {   int y=1;
       
//         while (y<=x)
//         {
//             cout<<x+y-1;
//             y=y+1;
//         }
//     cout<<endl;
//     x=x+1;
        
//     }
//     return 0;
// }



#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"give value of n\n";
    cin>>n;
    int x=1;
    while (x<=n)
    {
        int y=1;
        y=x;
        while (y<=x*2-1)
        {   
            cout<<y<<" ";
            y=y+1;

        }
       cout<<endl;
       x=x+1; 
    }
    
        
    
    return 0;
}