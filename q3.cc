#include <iostream>
using namespace std;

int sp(int n)
{
    if (n == 1 || n == 2)
        return n;
    
    int ff = sp(n-1);
    int fs = sp(n-2);

    return ff+fs;
}

int main()
{
    int a; cin >> a;

    cout << sp(a);
}