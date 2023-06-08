#include <iostream>
using namespace std;
// a
// b c
// d e f 
// g h i j 
int main(){
    int n;
    char alpha ='a';
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        for( int j = 1 ; j<=i ; j++){
            cout<<alpha<<" ";
            alpha+=1;
        }
        cout<<"\n";
    }
  return 0;
}