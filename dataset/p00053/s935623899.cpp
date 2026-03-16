#include <iostream>
#include <set>
using namespace std;
#define MAX 10000
//Have a HHK!!
class prime
{
    set<long> plist;
    bool isprime(long n);
    void extend();
public:
    prime() { plist.insert(2); extend(); }
    long showsum(long n);
};

bool prime::isprime(long n)
{
    set<long>::iterator ip;
    for(ip = plist.begin(); ip!=plist.end(); ip++)
        if(n%(*ip) == 0) return false;
    return true;
}

void prime::extend()
{
    int j=0;
    for(long c=3; j < MAX; c++)
        if(isprime(c))
        {
            plist.insert(c);
            j++;
        }
}

long prime::showsum(long n)
{
    long sum = 0;
    long c;
    set<long>::iterator ip;
    for(ip = plist.begin(), c = 0; c < n; c++, ip++)
        sum += *ip;
    return sum;
}

int main()
{
    long n = 1;
    prime pl;
    while(1)
    {
        cin >> n;
        if(n == 0) break;
        cout << pl.showsum(n) << endl;
    }
    return 0;
}