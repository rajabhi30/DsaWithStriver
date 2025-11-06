// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=n-2; i>=0; i--){
//         for(int j=0; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        
        int star=i;
        if(i>n){
            star=2*n-i;
        }
        for(int j=1; j<=star; j++){
            cout<<"* ";
        }
        cout << endl;
    }
    return 0;
}