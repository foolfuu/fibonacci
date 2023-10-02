#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a,
        b,
        c;
    a = 1;b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 0 ; i < 10 ; i++)
    {
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    getch();
    return 1;
}