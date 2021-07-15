/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/

#include<bits/stdc++.h>
using namespace std;
void pattern(){
    for(int i=5;i>=1;i--){
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