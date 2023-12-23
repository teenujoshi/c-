#include <iostream>
#include <fstream>
using namespace std;
bool vowel(char ch)

    {

        ch=toupper(ch);
        return (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');

    }
void vowelcount(ifstream& s)

{
    int len;
    char ch;
    int z=0;

    while(s.get(ch))

    {
        if(vowel(ch))
        {
            z++;
        }

    }

    cout<<z;

}

int main()

{

    ifstream myfile;

    myfile.open("text.txt");

    if(!myfile){

		cerr<<"Error opening file\n";

		exit(100);

	}

	vowelcount(myfile);

	myfile.close();

}
