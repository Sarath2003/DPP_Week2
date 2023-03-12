#include <iostream>
using namespace std;
int res = 1;

int fact(int n)
{
    if(n==0)
        return res;
    res *= n;
    fact(n-1);

}

int main()
{
    cout << fact(5);
    return 0;
}

