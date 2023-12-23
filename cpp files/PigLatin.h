#include <iostream>
#include <string>
using namespace std;
class PigLatin
{
public:
    string Piglatin(string& str);
    string PiglatinUpper(string& str);
    string PiglatinSentence(string& str);

};
string PigLatin::Piglatin(string & str)
{
    if(str=="")
    {
        return "";
    }
    string vowel="aeiou";
    string con="";
    string s="";
    if(vowel.find(str[0])==string::npos)
        {
            for(int i=0 ; i<str.length() ; i++)
            {
                if(vowel.find(str[i])!=string::npos)
                {
                    s = str.substr(i);
                    break;
                }
                else
                {
                    con+=str[i];
                }
            }
            return s+con+"ay";
        }
    else
    {
        if(vowel.find(str[str.length()-1])!=string::npos)
        {
            cout<<"y"+str+"yay"<<endl;
        }
        else
        {
            return "y"+str+"ay";
        }
    }
}
string PigLatin::PiglatinUpper(string & str){
    if(str=="")
    {
        return "";
    }
    string vowel="AEIOU";
    string con="";
    string s="";
    if(vowel.find(str[0])==string::npos)
    {
        for(int i=0 ; i<str.length() ; i++)
        {
            if(vowel.find(str[i])!=string::npos)
            {
                s = str.substr(i);
                break;
            }
            else
            {
                con+=str[i];
            }
        }
        return s+con+"AY";
    }
    else
    {
        if(vowel.find(str[str.length()-1])!=string::npos)
        {
            cout<<"Y"+str+"YAY"<<endl;
        }
        else
        {
            return "Y"+str+"AY";
        }
    }
}
string PigLatin::PiglatinSentence(string & str)
{
    string word("");
    string ans("");
    for(int i=0 ; i<=str.size() ; i++)
    {
        if(i==str.size())
        {
            ans+=Piglatin(word);
        }
        else if(str[i]==' ')
        {
            ans+=Piglatin(word);
            word="";
            ans+=' ';
        }
        else if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')))
        {
            ans+=Piglatin(word);
            word="";
            ans+=str[i];
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            word+=str[i];
        }
    }
    return ans;
}
