#include<cstdio>
#include<vector>
using namespace std;
int main(){
        int n;
        vector<bool> ar(1000*1000+1,true);
        for(int i=2;i<=1000;i++){
                if(ar[i])for(int j=i*i;j<ar.size();j+=i)ar[j]=false;
        }
        vector<long> ps;
        for(int i=2;i<ar.size();i++){
                if(ar[i])ps.push_back(i);
                if(ps.size()==10000)break;
        }
        for(int i=1;i<ps.size();i++)ps[i]=ps[i-1]+ps[i];
        for(;;){
                scanf("%d",&n);
                if(n==0) break;
                printf("%ld\n",ps[n-1]);
        }
}