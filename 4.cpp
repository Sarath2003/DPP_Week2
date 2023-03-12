// Check if strings are isomorphic or not

#include <bits/stdc++.h>
using namespace std;

void isomorphic(string s1, string s2)
{
    unordered_map<char, char> mp;
    for(int i=0; i<s1.size(); i++)
    {
        if(!mp.count(s1[i]))
            mp[s1[i]] = s2[i];
        else
        {
            if(mp[s1[i]] != s2[i])
            {
                cout << "Given strings are not isomorphic";
                return;
            }

        }
    }
    cout << "Given strings are isomorphic";
}

int main()
{
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;

    isomorphic(s1, s2);
}
