#include<iostream>
using namespace std;
long long int fact5(long long int n)
{
    return (n==1)? 5 : 5*fact5(n-1);
}

int main()
{
    long long int n;
    while(cin >> n)
    {
        if(n==0)break;
        int ans = 0;
        for(int i=1;fact5(i)<=n;i++)
        {
            ans += (n/fact5(i));
        }
    cout << ans << endl;
    }
    return 0;
}