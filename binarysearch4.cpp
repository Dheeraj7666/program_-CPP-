#include <iostream>
using namespace std;
int binarysearch(int n){
    int s=0,e=n,mid=(s+e)/2,ans = -1;
    while(s<=e){
        int square=mid*mid;
        if(square == n){
            return mid;
        }
        if(square < n){
            ans=mid;
            s=mid+1;
        }
        else{
            e = mid - 1;
        }
        mid = (s+e)/2;
    }
    return ans;
}
int main(){
    cout<<"The square root is :"<<binarysearch(4);
    return 0;
}