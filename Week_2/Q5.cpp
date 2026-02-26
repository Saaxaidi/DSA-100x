#include<iostream>

using namespace std;

int main(){
    //print number in reverse
    long long n; //becoz 0 <= n <= 10^18
    cin>>n;

    // int reversenumber = 0 ;

    // while(n!=0){
    //     int ld =n%10;
    //     reversenumber = (reversenumber*10)+ld;
    //     n/=10;
    // }
    // cout<<"reverse number: "<<reversenumber<<endl;
    
    if(n==0){
        cout<<0;
        return 0;
    }
    while(n!=0){
        cout<<n%10;
        n=n/10;
    }
}