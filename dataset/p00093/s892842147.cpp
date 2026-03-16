#include <stdio.h>
#include <vector>

using namespace std;

int main(){
  int n,m;
  vector<int> vec;

  scanf("%d%d", &n, &m);

  while(1){
    vec.clear();

    for(int i=n;i<=m;i++){
      if(!(i%400)) vec.push_back(i);
      else if((i%100) && !(i%4)) vec.push_back(i);
    }

    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++){
      printf("%d\n", *it);
    }

    if(vec.size() == 0) puts("NA");

    scanf("%d%d", &n, &m);
    if(n==0&&m==0) break;
    else puts("");
  }
}