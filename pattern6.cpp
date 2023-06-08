#include <iostream>
using namespace std; 
// 1
// 2 1
// 3 2 1
// 4 3 2 1
int main(){
     int n;
     cin>>n;
     for(int i=1;i<=n;i++){
        for(int j =i ;1<=j;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
     }
    return 0;
}