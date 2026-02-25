#include<iostream>

using namespace std;

int main(){
    /*
    M stars -> given n (number of rows) and m (number of coloum) print the following pattern
    n=5, m=3
        ***
        ***
        ***
        ***
        ***
    */

    int n,m;
    cout<<"enter the number of rows : ";
    cin>>n;
    cout<<"enter the number of stars that u want to print on each row : ";
    cin>>m;
    
    for(int i = 1 ; i <= n; i++){
        for(int j = 1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}