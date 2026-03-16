#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
int check(int i)
{
    if(i==2) return 1;
    if(i%2==0) return 0;
    for(int a=3;a*a<=i;a+=2)
    {
        if(i%a==0) return 0;
    }
    return 1;
}
int solve_a()
{
    int i;
    for(i=n-1;!check(i);i--);
    return i;
}
int solve_b()
{
    int i;
    for(i=n+1;!check(i);i++);
    return i;
}
int main()
{
    while(cin >> n)
    {
        cout << solve_a() << ' ' << solve_b() << endl;
    }
}