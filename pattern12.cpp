/*

A 
B B 
C C C         
D D D D       
| | | | | | | | | | | | | | | | | | | | | | | | 
y y y y y y y y y y y y y y y y y y y y y y y y y
Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z       

*/
#include<bits/stdc++.h>
using namespace std;
void pattern(){
    for(int i=65;i<=90;i++){
        for(int j=65;j<=i;j++){
            cout<<char(i)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}