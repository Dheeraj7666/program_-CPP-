#include<iostream>
using namespace std;
// 1    1
// 12  21
// 123321
int main(){
     int n;
     cout<<"Enter the value of rows : ";
     cin>>n;
     int k=n;
     for(int i=1;i<=n;i++){
          for(int j=1;j<=i;j++){
               cout<<j<<" ";}
               int p =(k*2)-2;
               if(p!=2 || p==2){
                    for(int y=1;y<=p;y++){
                         cout<<"  ";
                    }
               }
               for(int z = i;1<=z;z--){
                    cout<<z<<" ";
               }
               k--;
               cout<<"\n";
     }
     return 0;
}