#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int cost, n;
int marume(double a)
{
    int b;
    b = (int)(a*10);
    if(b%10 > 4) return (int)(a+1);
    else return (int)a;
}
int main()
{
    int sum=0;
    int count=0;
    double sumn=0;
    char comma;
    while(cin >> cost >> comma >> n)
    {
        sum += cost * n;
        sumn += n;
        ++count;
    }
    cout << sum << endl;
    cout << marume(sumn/count) << endl;
}