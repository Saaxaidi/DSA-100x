//max and min of 3 number
#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    cin>> a>>b>>c;

    if(a>=b and a>=c){
        cout<< "A is a maximum value i.e.: "<<a<<endl;
    }
    else if(b>=a and b>=c){
        cout<< "B is the maximum value i.e.:"<<b<<endl;
    }
    else{
        cout<< "C is the maximum value i.e.:"<<c<<endl;
    }
}