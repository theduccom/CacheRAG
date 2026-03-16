#include<cstdio>
#include<vector>
using namespace std;
int main(){
    int n;
    while(~scanf("%d",&n)){
        vector<int> ar;
        for(int i=512;i>=1;i/=2){
            if(n>=i){
                ar.push_back(i);
                n-=i;
            }
        }
        for(int i=ar.size()-1;i>0;i--){
            printf("%d ",ar[i]);
        }
        printf("%d",ar[0]);
        printf("\n");
    }
}