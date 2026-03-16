#include<cstdio>
#include<vector>
using namespace std;

int n;
vector<int> p;
int sosu[500000];
int main(){
  sosu[1]=1;
  for(int i=2;i<400000;i++){
    if(sosu[i]==1) continue;
    for(int j=i*2;j<400000;j+=i)
      sosu[j]=1;
  }
  for(int i=2;i<400000;i++){
    if(!sosu[i]) p.push_back(i);
  }
  while(1){
    scanf("%d",&n);
    if(n==0) break;
    int res=0;
    //    printf("%d\n",p[0]);
    for(int i=0;i<n;i++) res+=p[i];
    printf("%d\n",res);
  }
}