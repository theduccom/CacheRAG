#include <stdio.h>
#include <bitset>
#include <set>
using namespace std;
const int N=1000000;
int main(){
    int n,x,temp;
    bitset<N>b;
    set<int> prime;
    bool f;
    b.reset();
    prime.insert(2);
    for(long long int i=3;i<1000000;i+=2)if(!b[i]){
        prime.insert(static_cast<int>(i));
        for(long long int j=i*i;j<1000000;j+=i*2)b[j]=true;
    }
    while(true){
        scanf("%d%d",&n,&x);
        if(n==0&&x==0)return 0;
        b.reset();
        b[0]=true;
        while(n--){
            scanf("%d",&temp);
            while(temp<=x){
                b|=b<<temp;
                temp<<=1;
            }
        }
        f=true;
        for(set<int>::iterator u=prime.upper_bound(x);f&&u!=prime.begin();){
            u--;
            if(b[*u]){
                f=false;
                printf("%d\n",*u);
            }
        }
        if(f)printf("NA\n");
    }
}
