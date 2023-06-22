#include<iostream>
#include<math.h>
using namespace std;
void unique(int arr[],int n){
    int i,j ,count =  0;
    for( i = 0;i<n;i++){
        for( j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                break;
            }
        }
        if(j == n){
           count+=1;
        }
    }
    cout<<count;
}
int main(){
    int arr[]={2,3,1,6,8,6,10};
    unique(arr,7);
    // cout<<a;
    return 0;
}