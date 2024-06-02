//reverse an array
#include <iostream>
using namespace std;

void pa(int e[],int l, int s)
{
    if (l>s)
        return;
    
    cout << e[l] << " ";

    return pa(e,l+1,s);
}

int main()
{
    int a; cin >> a;

    int ar[a];
    for (int i =0; i <a; i++)
    {
        cin >> ar[i];
    }

    pa(ar,0,a-1);
}