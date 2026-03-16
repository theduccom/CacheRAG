#include <iostream>
#include <cstring>
using namespace std;

int is[1000001];
bool isprime[1000001];

int main() {

    isprime[0] = isprime[1] = true;
    for(int i=4; i<=1000000; i+=2) isprime[i] = true;
    for(int i=3; i*i<=1000000; i+=2)
        for(int j=2; i*j<=1000000; ++j)
            isprime[i*j] = true;

    int n,x,s;
    while(cin>>n>>x, n|x) {
        memset(is, -1, sizeof(is));
        is[0] = 0;
        for(int i=1; i<=n; ++i) {
            cin>>s;
            for(int j=0; j<=x; ++j) {
                if(is[j] >= i) continue;
                if(is[j] >= 0) {
                    for(int k=1; j+s*k <= x; ++k)
                        is[j+s*k] = i;
                }
            }
        }

        for(int j=x; j>=0; --j) {
            if(is[j] >= 0 && !isprime[j]) {
                cout<<j<<endl;
                goto NEXT;
            }
        }
        cout<<"NA"<<endl;
    NEXT:;
    }
}