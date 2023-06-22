#include<iostream>
#include<math.h>
using namespace std;
void unique(int arr[],int n){
    int i,j;
    for( i = 0;i<n;i++){
        for( j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(j == n)
           break ;
        
    }
    cout<<arr[i];
}
int main(){
    int arr[]={2,3,1,6,3,6,2};
    unique(arr,7);
    // cout<<a;
    return 0;
}