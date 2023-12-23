#include<iostream>
#include"Piglatin.h"
using namespace std;
int main()
{
    PigLatin obj1;
    string example1("The quick brown fox...");
    cout << "The quick brown fox..." << endl;
    cout << obj1.PiglatinSentence(example1) << endl;
    PigLatin obj2;
    string example2("This can't be er... true");
    cout << "This can't be er... true" << endl;
    cout << obj2.PiglatinSentence(example2) << endl;
    return 0;
}
