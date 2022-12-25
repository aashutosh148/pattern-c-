// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"give value of n"<<endl;
//     cin>>n;
//     int x=1;
//     while (x<=n)
//     {   int y=n;
//         while (y>0)
//         {
//             cout<<y;
//             y=y-1;
//         }
//     cout<<endl;
//     x=x+1;
//     }
// return 0;
// }

//OTHER METHOUD

#include <iostream>
using namespace std;
int main(){
    int n;
     cout<<"give value of n"<<endl;
     cin>>n;
     int x=1;
     while (x<=n)
     {   int y=1;
         while (y<=n)
         {
             cout<<n-y+1;
             y=y+1;
         }
     cout<<endl;
     x=x+1;
     }
    return 0;
}