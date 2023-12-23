#include <iostream>
using namespace std;

void decrease(){
    static int num = 0;
    cout << --num << endl;
}

int main(){
    decrease();
    decrease();
    return 0;
}
