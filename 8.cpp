// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"give value of n"<<endl;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {   int col=row;
//         while (col>0)
//         {
//             cout<<col<<" ";
//             col=col-1;
//         }
//     cout<<endl;
//     row=row +1;
//     }
//     return 0;
// }


/****************************OTHER METHOUD****************************/

#include <iostream>
using namespace std;
int main (){
int n;
cout <<"give value of n\n";
cin>>n;
int row=1;
while (row<=n)
{
    int col=1;
    while (col<=row)
    {
        cout<<row-col+1<<" ";
        col=col+1;
    }
    cout<<endl;

    row=row+1;
}



    return 0;
}