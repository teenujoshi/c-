#include<iostream>
#include "operatoroverloading.h"
using namespace std;

int main()
{

    //first made 6 objects
    Money obj1;
    Money obj2(56.98);  //parameterized constructor used
    Money obj3(113.87);  //parameterized constructor used
    Money obj4(98.42);  //parameterized constructor used
    Money obj5(89.76);  //parameterized constructor used
    Money obj6(obj5);  //copy constructor used
    Money obj7(obj4);  //copy constructor used

    //created four objects using those 8
    Money obj8 = obj1+obj2;
    Money obj9 = obj2-obj1;
    Money obj10 = obj3*=obj2;
    Money obj11 = obj2/=obj4;

    //printing all the objects values to demonstrate
    obj1.print();
    obj2.print();
    obj3.print();
    obj4.print();
    obj5.print();
    obj8.print();
    obj9.print();
    obj10.print();
    obj11.print();

    //now have written some statements that will be executed if "if" statement return true
    //all these if statements have the overloaded operators as conditions
    if (obj5==obj8)
    {
        cout << "this was printed because the condition was true" << endl;
    }
    if (obj4!=obj9)
    {
        cout << "this was printed because the condition was true" << endl;
    }

    if (obj4<obj10)
    {
        cout << "this was printed because the condition was true" << endl;
    }

    if (obj5>obj8)
    {
        cout << "this was printed because the condition was true" << endl;
    }
        //end of demonstration
    return 0;
}
