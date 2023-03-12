//Convert a sentence into its equivalent mobile numeric keypad sequence

#include <bits/stdc++.h>
using namespace std;

void convertNumeric(string s, string *str)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
            cout << "0";
        else
            cout << str[s[i]-'A'];
    }
}

int main()
{
    string s;
    cout << "Enter the sentence: ";
    getline(cin,s);
    string str[] = { "2",   "22",  "222", "3",   "33",   "333", "4",
                     "44",  "444", "5",   "55",  "555",  "6",   "66",
                     "666", "7",   "77",  "777", "7777", "8",   "88",
                    "888", "9",   "99",  "999", "9999" };
    convertNumeric(s,str);
}
