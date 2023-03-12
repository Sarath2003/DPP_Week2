// Check if a string is palindrome or not

#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    for(int i=0; i<s.size()/2; i++)
    {
        if(s[i] != s[s.size()-i-1])
            return 0;
    }
    return 1;
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    if(palindrome(s))
        cout << s << " is a palindrome";
    else
        cout << s << " is not a palindrome";
}
