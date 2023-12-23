/*[Classes] Implement a Time class.
Each object of this class will represent
 a specific time of day,
storing the hours, minutes, and seconds
as integers. Include a constructor,
access functions, a
function advance(int h, int m, int s )
 to advance the current time of an
 existing object by h
hours, m minutes and s seconds, a
 function reset(int h, int m, int s)
  to reset the current time of
an existing object to h hours:m minutes:
    s seconds, and a print ( ) function to
    print the current
time.*/





#include<iostream>
using namespace std;
class Time
{
    private :
        int hour;
        int mint;
        int sec;
    public :
        Time()
        {
            hour=0;
            mint=0;
            sec=0;
        }

void advance(int h,int m,int s){

            hour=hour+ h;
            mint=mint + m;
            sec = sec + s;
            cout<<endl;

}
void reset(){


            cin >> hour;

            cin >> mint;

            cin >> sec;

            cout << "Time: " << hour << " : " << mint <<" : " << sec;
            cout << endl;
}
void print(){


        cout << "Time: " << hour << " : " << mint << " : " << sec;
        cout << endl;
}
};


