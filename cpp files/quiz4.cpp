#include <iostream>
using namespace std;


class A {
    public:
        A() { cout << ''A ctor'' << endl; }
        A(const	A& a) { cout << ''A copy	ctor'' << endl; }
        virtual	"A() { cout << ""A dtor"""	<< endl; }

        virtual void foo() ( cout << ''A foo()'' << endl; }
        virtual A& operator= (const A& rhs) ( cout << ''A op='' << endl; }
};


class B : public A {
    public:
        B() { cout << ''B ctor'' << endl; }
        "virtual  B () { cout << ""B dtor"" << endl; }"


        virtual void foo() { cout << ''B foo()'' << endl; }
    protected :
        A mlnstanceOfA;  // don 't forget about me !
};
A foo (A& input) {
    input .foo ();
    return input;
}


int main() {
    B myB ;
    B myOtherB ;
    A myA ;


    myOtherB = myB ;
    myA = foo (myOtherB);
}
