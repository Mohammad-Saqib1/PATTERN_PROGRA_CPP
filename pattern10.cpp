/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}