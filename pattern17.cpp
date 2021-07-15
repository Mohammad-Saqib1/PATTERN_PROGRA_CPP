/*
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
*/

#include<bits/stdc++.h>
using namespace std;
void pattern(){
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}