#include <bits/stdc++.h>
using namespace std;

void minDeleteInsert(string s1, string s2)
{
    int cnt = 0;
    for(int i=0; i<s2.size(); i++)
    {
        if(s1[i]==s2[i])
            cnt++;
    }
    cout << "Minimum Deletion: " << s1.size()-cnt << endl;
    cout << "Minimum Insertion: " << s2.size()-cnt << endl;
}

int main()
{
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;

    minDeleteInsert(s1,s2);
}
