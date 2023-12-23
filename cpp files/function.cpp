#include <iostream>
using namespace std;

int sum(int a ,int b );       //function declaration  //function prototype
void g(void);                 //function declaration
int main(){
    int num1,num2;
    cout <<"Enter first number" <<endl;
    cin >> num1;
    cout <<"enter second number" <<endl;
    cin >> num2;
    cout <<"The sum is "<< sum(num1,num2) <<endl;  //actual parameters
    g();
    return 0;
}
int sum(int a, int b)   //formal parameters         //function definition
{
    //formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;
    return c;
}
void g()
{
    cout <<"hello.";
}
