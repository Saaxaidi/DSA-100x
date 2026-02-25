#include<iostream>

using namespace std;

int main(){
//print all even numbers from i to n
int n;
cin>>n;

//using for loop
for (int i =1;i<=10;i++){
    if(i%2==0){
        cout<<i<<endl;
    }
}

//using while loop
int i= 1;
while(i<=n){
    if(i%2==0){
        cout<<i<<endl;
    }
    i++;
    }

}