/*      
A 
A B        
A B C      
A B C D    
A B C D E  
| | | | | | | | | | | | | | | | | | | | | | | | 
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z       

*/
#include<bits/stdc++.h>
using namespace std;
void pattern(){
    for(int i=65;i<=90;i++){
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