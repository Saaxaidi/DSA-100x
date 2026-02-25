#include<iostream>

using namespace std;

int main(){

    int n,m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number od cols: ";
    cin>>m;

    /* printing numberd rectangle I->
    n = 5, m=7
        1111111
        2222222
        3333333
        4444444
        5555555
    */

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }
    
    /* printing numberd rectangle II->
    n = 5, m=7
        1234567
        1234567
        1234567
        1234567
        1234567
    */

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    /* printing numberd rectangle -III->
    n = 5, m=7
        ABCDEFG
        ABCDEFG
        ABCDEFG
        ABCDEFG
        ABCDEFG
    */
    
    // for(int i=1;i<=n;i++){
    //     char ch ='A';
    //     for(int j=1;j<=m;j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }

        /* printing numberd rectangle -IV->
    n = 5, m=7
        AAAAAAA
        BBBBBBB
        CCCCCCC
        DDDDDDD
        EEEEEEE
    */
    
    char ch ='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }

}