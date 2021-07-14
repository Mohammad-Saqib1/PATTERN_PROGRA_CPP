/*
1 0 1 0 1 0
1 0 1 0 1 0
1 0 1 0 1 0
1 0 1 0 1 0
1 0 1 0 1 0
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(){
    int row=6,colunm=5;
    for(int i=1;i<=colunm;i++){
        for(int j=1;j<=row;j++){
            cout<<(j%2)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}