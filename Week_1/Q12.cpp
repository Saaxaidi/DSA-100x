#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n>90){
    cout<<"Excellent";
    }else if(n>80 and n<=90){
        cout<<"Good";
    }else if (n>70 and n<=80){
        cout<<"Fair";
    }else if (n>60 and n<=70){
        cout<<"Meets Expectations";
    }else{
        cout<<"Below Par";
    }
    
}