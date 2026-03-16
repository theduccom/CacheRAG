#include<iostream>
#include<set>
#include<cstdio>
using namespace std;

int main()
{
    multiset<double> h;
    double height;
    while(cin >> height)
    {
        h.insert(height);
    }
    double best = *(--h.end());
    double worst = *(h.begin());

    printf("%f\n",best-worst);
    return 0;
}