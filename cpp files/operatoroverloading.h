/* [Operator Overloading] Create a class Money that
represents a money valuer (combination of
INR and Paisa). Overload the binary plus operator to
 add two money values to get a new one.
Overload the binary minus operator to subtract a money
 value from a larger value to get a new
one. Also overload the *= operator to multiply a money
 value by an integer and /= operator to
divide a money value by an integer. Also, attempt
overloading only the relational operators (<,
>, ==, and !=) to compare the two Money objects.
*/




#include <iostream>
#include <cstring>
using namespace std;

class Money{
    private:
        double money_inr_paisa; //data members

    public:
        Money();  //constructor
        Money(double m);  //parameterized constructor
        Money(const Money &m);  //copy constructor
        Money& operator + (const Money &m);
        Money& operator - (const Money &m);
        Money& operator *= (const Money &m);
        Money& operator /= (const Money &m);
        bool operator < (const Money &m);
        bool operator > (const Money &m);
        bool operator == (const Money &m);
        bool operator != (const Money &m);
        void print();
        ~Money(){};
};

Money::Money()
{
    money_inr_paisa = 0.00;
}

Money::Money(double m)
{
    money_inr_paisa = m;
}

Money::Money(const Money &m)
{
    money_inr_paisa = m.money_inr_paisa;
}

Money& Money::operator + (const Money &m)
{
    money_inr_paisa = money_inr_paisa + m.money_inr_paisa;
    return *this;
}

Money& Money:: operator - (const Money &m)
{
    if (money_inr_paisa > m.money_inr_paisa)
    {
    money_inr_paisa = money_inr_paisa - m.money_inr_paisa;
    return *this;
    }

    if (money_inr_paisa < m.money_inr_paisa)
    {
    money_inr_paisa = m.money_inr_paisa - money_inr_paisa ;
    return *this;
    }
}

Money& Money::operator *= (const Money &m)
{
    money_inr_paisa = money_inr_paisa * m.money_inr_paisa;
    return *this;
}

Money& Money::operator /= (const Money &m)
{
    money_inr_paisa = money_inr_paisa / m.money_inr_paisa;
    return *this;
}

bool Money::operator < (const Money &m)
{
    if (money_inr_paisa < m.money_inr_paisa)
            return  true;

    if (money_inr_paisa > m.money_inr_paisa)
            return  false;
}

bool Money::operator > (const Money &m)
{
    if (money_inr_paisa > m.money_inr_paisa)
            return  true;

    if (money_inr_paisa < m.money_inr_paisa)
            return  false;

}

bool Money::operator == (const Money &m)
{
    if (money_inr_paisa == m.money_inr_paisa)
            return true;

    else
            return false;

}

bool Money::operator != (const Money &m)
{
    if (money_inr_paisa != m.money_inr_paisa)
            return true;

    else
            return false;

}

void Money::print()
{
    //print the money in format --- "Rupees: xxxx"
    cout << "Rupees: " <<money_inr_paisa<< endl;
}
