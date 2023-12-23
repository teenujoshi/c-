#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream file;
    file.open("file1.txt");
    if (!file)
    {
        cerr << "Can't open File1 " << endl;
        exit(100);
    }
    ofstream file2;
    file2.open("file2.txt");
    if(!file2)
    {
        cerr << "Can't open File 2\n";
        exit(100);
    }
    string str=("");
    char ch;
    while(file.get(ch))
    {
        str=str+ch;
    }
    string number=("");
    int count = 0;
    string digits("0123456789");
    for(int i=0 ; i<str.length() ; i++)
    {
        if(digits.find(str[i])!=string::npos)
        {
            count++;
            number+=str[i];
        }
        else{
            count=0;
            number="";
        }
        if(count==10){
            file2 << number;
            file2 << " ";
        }
    }
    file.close();
    file2.close();
    cout << " File1 phone no. extracted task completed : " << endl;
    char ch1=3;
    cout << ch1;
    return 0;
}
