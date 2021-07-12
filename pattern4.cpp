/*

Print like this type for n numbers
n n n n n n n n  n  n  n n
|  |  |  |   | | | | | | |
|  |  |  |   | | | | | | |
|  |  |  |   | | | | | | |
|  |  |  |   | | | | | | |

3 3 3 3 3 3---------------3
2 2 2 2 2 2--------------2
1 1 1 1 1 1 - - - - - - -1



*/



#include<bits/stdc++.h>
using namespace std;
 void pattern(int n){
     for(int i=n;i>=1;i--){
         for(int j=n;j>=1;j--){
           cout<<i<<" ";  
         }
         cout<<endl;
     }
 }

int main(){
    int n;
    cout<<"Enter the size of pattern "<<endl;
    cin>>n;
    pattern(n);
    return 0;
}