// Introduction to c++

// First c++ code 
#include <iostream> //this is the header file which is helping us to use cout 
using namespace std; //without this we will write std :: cout<<"hello world" inorder to print something on screen 

int main(){
    cout << "hello world";
    cout << "100x school ";//cout is helping is print something on screen
    //output without endl-> hello world100x school.
    
    //if we want to move our curson on new line we use endl
    cout << "hello world"<<endl;
    cout << "100x school "<<endl;
    /*output-> "hello world"
                "100x school "*/

    //method 2 
    cout << "hello world";
    cout <<endl;
    cout << "100x school ";
    cout <<endl;
    /*output-> "hello world"
                "100x school "*/
    
    //method 3
    cout << "hello world"<<endl<<"100x school"<<endl <<"hello3"<<endl;
    /*output-> "hello world"
                "100x school 
                hello3"*/
    

    //printing pattern
    /*  
        *
        **
        ***
        ****
    */
    //method 1
    cout << "*" <<endl;
    cout << "**" <<endl;
    cout << "***" <<endl;
    cout << "****" <<endl;

    /*
    Some Important RULES to remember
    RULE 1 -> SEMECOLON : Every statement must end with ';'
    RULE 2 -> CASE -SENSITIVE :cout will work, but COUT will not
    RULE 3 -> PRINTING TEXT : text must be inside double quotes
    RULE 4 -> NEW LINE : for a new line, use endl
    RULE 5 -> BRACKETS comes in Pair
    */


    //Arithmatic Operator ->
    cout << "10*2" <<endl; // 10*2
    cout << 10+3 <<endl; //13
    cout << 10-3 <<endl; // 7
    cout << 10*3 <<endl; // 30
    cout << 10/3 <<endl; //3
    cout << 10%3 <<endl; //1

    /*
    Note -> 
    if we divide 2 integers, the result is always an integer
    we get the quotient
    */

    cout << 10.0/3 <<endl; //3.33
    cout << 10/3.0 <<endl; //3.33
    /*
    Note -> 
    if we want floating number as a answer then we one of the operand must me decimal
    */

    //Variables 
    //syntax -> data_type variable_name = vale
    int age =21;
    cout <<age<<endl; //21

    /*
    Datatype ->
    int -> whole number
    float ->decimal
    double  -> decimal
    long long -> big number
    char ->single chaeacter
    bool -> true/false
    */
    
    //eg ->
    char ch ='#';
    bool b =true;
    
    /*
    Some Important RULES to remember
    RULE 1 -> Variable must be declared before use
    RULE 2 -> No spaces in variable name
    RULE 3 -> case sensitive: marks != Marks
    RULE 4 -> Name should be meaningful
    */

    //input from the user
    int a;
    int b;
    cin >> a;
    cin >> b;
    //cin >> a >> b
    cout<<a+b<<endl;

    double c;
    cin>> c;
    cout<<c<<endl;

    /*
    Relational operator->
    >,<,>=,<=,==,!=
    */
    bool ans = 5==5; //true ->1
    bool ans2 = 6!=5;//true ->1
    bool ans3 = 6<3;//true ->0
    bool ans4 =1472234; // true/1
    bool ans4 =-123; // true/1
    cout<<ans<<endl;
    cout<<ans2<<endl;
    cout<<ans3<<endl;

    /*
    Note -> 
    except of zero everything is true
    0->false
    */

    //Conditionals statements
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }

}


