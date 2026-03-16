#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N!=0){
        int index=0;
        int maxDist=0;
        for ( int i = 0; i < N; i++ ) {
            int k,a,b;
            cin>>k>>a>>b;
            if(a+b>maxDist) {
                maxDist = a + b;
                index = k;
            }
        }
        cout << index << " " << maxDist << endl;
        cin >> N;
    }
    return ( 0 );
}

