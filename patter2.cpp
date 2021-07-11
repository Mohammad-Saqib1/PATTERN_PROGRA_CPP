/*
Print like this type for n numbers
n (n-1)----------5 4 3 2 1
n (n-1)----------5 4 3 2 1
n (n-1)----------5 4 3 2 1
n (n-1)----------5 4 3 2 1
               
| | | | ---------| | | | |
| | | | ---------| | | | |
| | | | ---------| | | | |

n (n-1)----------5 4 3 2 1

*/

#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the size of pattern:"<<endl;
    cin>>n;
    pattern1(n);
    return 0;
}