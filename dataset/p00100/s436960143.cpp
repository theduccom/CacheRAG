#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
using namespace std;
int main(){
  int n,inindex;
  long long num,val;
  vector<int> Index;
  map<int,long long> List;
  while(true){
    scanf("%d",&n);
    if(n == 0)break;
    List.clear();
    Index.clear();
    for(int i=0;i<n;i++){
      cin >> inindex >> num >> val;
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