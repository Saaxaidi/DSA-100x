#include<iostream>

using namespace std;

int main(){
    //print multiplication table
    int n;
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl; 
    }
}