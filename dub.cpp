#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int arr[]={1,3,7,1,3};
    int ans=0;
    for(int i=0;i<5;i++){
        ans=ans^arr[i];
        cout<<ans<<endl;
    }
    cout<<ans;
    return 0;
}