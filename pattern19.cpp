/*
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(){
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";

        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}