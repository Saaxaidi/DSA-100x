//max and min of 3 number
#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    cin>>a>>b>>c;

    if((a>=b)&&(a>=c)){
        if(b<=c){
            cout<<"Min = "<<b<<endl;
        }else{
            cout<<"Min = "<<c<<endl;
        }
        cout<<"Max = "<<a<<endl;
    }else if ((b>=a)&&(b>=c)){
        if(a<=c){
            cout<<"Min = "<<a<<endl;
        }else{
            cout<<"Min = "<<c<<endl;
        }
        cout<<"Max = "<<b<<endl;
    }else if ((c>=a)&&(c>=b)){
        if(a<=b){
            cout<<"Min = "<<a<<endl;
        }else{
            cout<<"Min = "<<b<<endl;
        }
        cout<<"Max = "<<c<<endl;
    }
}