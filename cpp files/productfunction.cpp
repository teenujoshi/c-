#include <iostream>
using namespace std;

int multiply(int x,int y);

int main()
{
    int a,b;
    cout <<"Enter the number" ;
    cin >> a >> b;
    int result;
    result = multiply(a,b);
    cout <<"The product is " << result;
    return 0;
}
int multiply(int x,int y){
    return x*y;
}
