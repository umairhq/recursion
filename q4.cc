//palindrome question

#include <iostream>
using namespace std;

int pc(string e, int l , int h)
{
    if (l>=h)
        return 1;
    if (e[l] != e[h])
        return 0;
    
    return pc(e,l+1,h-1);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
    string a;
    cin >> a;
    int n = a.length();

    if (pc(a,0,n-1) == 1)
        cout << "YES";
    else
        cout << "NO";

    } 
}