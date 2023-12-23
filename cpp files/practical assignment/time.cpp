#include<iostream>
#include"time.h"
using namespace std;

int main()
{
    Time obj1;
    obj1.print();
    obj1.reset();
    obj1.print();

    Time obj2;
    obj2.advance(4,5,6);
    obj2.print();
    obj2.reset();
    obj1.print();


    return 0;
}
