//max and min of 2 number
#include<iostream>
using namespace std;

int main(){
    int a;
    int b;

    cin>> a>>b;
    if(a>b){
        cout<< "A is a maximum value i.e.: "<<a<<endl;
    }else{
        cout<< "B is the maximum value i.e.:"<<b<<endl;
    }
    if(a<b){
        cout<< "A is a minimum value i.e.: "<<a<<endl;
    }else{
        cout<< "B is the minimum value i.e.:"<<b<<endl;
    }
}