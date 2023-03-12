// Given two strings s1 and s2, return the length of their longest common subsequence. If there is no common subsequence return 0

#include <bits/stdc++.h>
using namespace std;

int lcs(string x, string y, int n, int m)
{
    if(n==0 || m==0)
        return 0;
    if(x[n-1] == y[m-1])
        return 1 + lcs(x,y,n-1,m-1);
    else
        return max(lcs(x,y,n-1,m), lcs(x,y,n,m-1));
}

int main()
{
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;

    cout << endl << "Length of longest common subsequence: " << lcs(s1, s2, s1.size(), s2.size());
}
