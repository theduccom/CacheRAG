#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    for(;;){
        scanf("%d",&n);
        if(n==0) break;
        vector<pair<int,int> > ar(n);
        for(int i=0;i<n;i++){
            int n[3];
            for(int j=0;j<3;j++){
                scanf("%d",&n[j]);
            }
            ar[i]=make_pair(n[0],n[1]+n[2]);
        }
        int maxa,maxb=0;
        for(int i=0;i<n;i++){
            if(ar[i].second>maxb){
                maxa=ar[i].first;
                maxb=ar[i].second;
            }
        }
        printf("%d %d\n",maxa,maxb);
        
    }
}