#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
using namespace std;
typedef unsigned long long ll;
int main(){
  int n,val,num,inindex;
  vector<int> Index;
  map<int,ll> List;
  while(true){
    scanf("%d",&n);
    if(n == 0)break;
    List.clear();
    Index.clear();
    for(int i=0;i<n;i++){
      scanf("%d %d %d",&inindex,&val,&num);
      if(!List[inindex]){
	Index.push_back(inindex);
      }
      List[inindex]+=val*num;
    }
    bool NAf=true;
    for(int i=0;i<Index.size();i++){
      if(List[Index[i]] >= 1000000){
	printf("%d\n",Index[i]);
	NAf=false;
      }
    }
    if(NAf)printf("NA\n");
  }

  return 0;
}