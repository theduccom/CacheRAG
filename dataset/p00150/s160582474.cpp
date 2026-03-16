#include<bits/stdc++.h>
using namespace std;
int prime(int z)
{
    for(int i=2;i<z;i++) if(z%i==0) return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while(1)
    {
        int n,i;
        cin >> n;
        if(n==0) break;
        if(n%2 == 0)n-=1;
        for(i=n;i>=2;i-=2)
        {
            if(prime(i) && prime(i-2))
            {
                cout << i-2 << " " << i << "\n";
                break;
            }
        }
    }

    return 0;
}


