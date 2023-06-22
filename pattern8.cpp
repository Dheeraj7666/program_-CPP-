#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=5;i++){
        for(int j=0;j<=i+1;j++){
            if(j==0){
                cout<<"*";
            }
            else if(i==j || i!=j){
                for(int k= 1;k<=i;k++){
                    cout<<k;
                }
                else if(1<j){
                    for(int m=k;1<=m;m--){
                        cout<< m;
                    }
                    else if(i!=j){
                        while(j%2==0){
                            cout<<"*";
                        }
                        else{
                            cout<<" ";
                        }
                    }
                }
            }
        }
        cout<<"\n";
     }
}
