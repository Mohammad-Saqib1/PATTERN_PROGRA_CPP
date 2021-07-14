/*
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(){
    int row=5,column=6;
    for(int i=1;i<=row;i++){
        for(int i=1;i<=column;i++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main(){
    pattern();
    return 0;
}