/*
Loops -> 
when we want to repeat an action again again to a certain contion then we will use loop

There are 3 types of loop 
1. for loop ->
syntax ->
    for(initialisaton ;conditon ;update){
    //code
    }
2. while loop -> 
syntax ->
    intialisation
    while(condition){
    code
    update
    }
3. do while loop ->
syntax ->
    intialisation
    do{
    code
    update
    }while(condition)
*/

#include <iostream>
using namespace std;

int main(){
//Print numbers from 1 t 10
    //using for loop
    for (int i=1; i<=10;i++){
        cout<<i<<endl;
    }

    //using while loop
    int i =1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }
    
//print n to 1
    int n;
    cin>>n;
    int i=n;
    while(n>=1){
        cout<<i<<endl;
        i--;
    }

//print number from l to r
    int l ;
    int r;
    cin>>l>>r;

    int i =l;
    while(i<=r){
        cout<<i<<endl;
        i++;
    }

}