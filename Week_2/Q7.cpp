#include<iostream>

using namespace std;

int main(){
    //palindrome ->eg = 12321 -> palidrome number
    int n ;
    cin>>n;

    int og = n;
    int reverse =0;

    while(n!=0){
        int ld =n%10;
        reverse =(reverse*10)+ld;
        n/=10;
    }

    if(og==reverse){
        cout<<"It is a palidrome number"<<endl;
    }else{
        cout<<"It is not a palidrome number"<<endl;
    }
}