/*
A B C D E
A B C D
A B C
A B 
A

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(){
    for(int i=69;i>=65;i--){
        for(int j=65;j<=i;j++){
            cout<<char(j)<<" ";

        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}