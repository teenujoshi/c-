#include <iostream>
using namespace std;
class Fish
{
private :
    string species;
    char gender;
    double weight;
public :
    Fish()
    {
        species = "guppy";
        gender ='m';
        weight = 1.0;
       cout<<"Default specie name : ";
       cout<<species;
       cout<<endl;
       cout<<"Default gender  : ";
       cout<<gender;
       cout<<endl;
       cout<<"default weight of fish  : ";
       cout<<weight;
       cout<<"g"<<endl;



    }
    Fish(string species,char gender,double weight)
    {
       cout<<endl;
       cout<<" specie name : ";
       cout<<species;
       cout<<endl;
       cout<<" gender 'm' or 'f' : ";
       cout<<gender;
       cout<<endl;
       cout<<" weight of fish  : ";
       cout<<weight;
       cout<<"g"<<endl;



    }
    void feed(double weight)
    {

     cout<<"weight of fish before feeding : "<<weight<<"g"<<endl;
     cout<<"weight of fish after feeding ";
     weight= weight+ weight/10;
     cout<<weight<<"g"<<endl;
    }
    void tostring()
    {

        cout<<"Enter the description for fish : ";
        string description;
        getline(cin,description);
    }

};
int main()
{
    Fish obj;
    obj.feed(1.0);
    obj.tostring();

    Fish obj2("jelly fish",'f',4.58);
    obj2.feed(4.58);
    obj2.tostring();
return 0;
}
