//write the 1 to n numbers using recursion

#include <iostream>
using namespace std;

int pn(int n, int s)
{
    if (s > n) 
        return n;

    cout << s << " ";
    pn(n,s+1);  
}

int main()
{
    int a;
    cin >> a;
    int i = 1;
    pn(a,i);
    cout << endl;
    int b = 10;

    //print from 6 to 10
    pn(b,6);
}