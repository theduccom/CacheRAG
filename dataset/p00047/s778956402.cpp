#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
  int box[3] = {1,0,0};
  char s,c,f;
  while(cin>>s>>c>>f){
    int w = box[s-'A'];
    box[s-'A']=box[f-'A'];
    box[f-'A']=w;
  }
  for(int i = 0 ; i < 3 ; i ++)
    if(box[i]==1)
      cout<<char(i+'A')<<endl;
  return 0;
}