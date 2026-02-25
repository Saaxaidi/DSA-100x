#include<iostream>

using namespace std;

int main(){

    /* printing inverted pyramid->
    n = 5
        *****
        *   *
        *   *
        *   *
        *****
        
    */

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if((j==1)or(j==n)or(i==1)or(i==n)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}