/*
5 4 3 2 1
5 4 3 2
5 4 3
5 2
5

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(){
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}