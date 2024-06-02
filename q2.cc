//print the n th fib.. series

#include <bits/stdc++.h>
using namespace std;

int pf(int n)
{
    if (n <= 1)
        return n;

    return pf(n-1)+pf(n-2);
}

int main()
{
    int a; cin >> a;

    cout << pf(a);
}
