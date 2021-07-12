/*

Print like this type for n numbers
1 1 1 1 1 1 - - - - - - -1
2 2 2 2 2 2--------------2
3 3 3 3 3 3---------------3
|  |  |  |   | | | | | | |
|  |  |  |   | | | | | | |
|  |  |  |   | | | | | | |
|  |  |  |   | | | | | | |
n n n n n n n n  n  n  n n


*/



#include<bits/stdc++.h>
using namespace std;
 void pattern(int n){
     for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
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