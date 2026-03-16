#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main(){
  typedef map<int,int> Imap;
  int n;
  while(scanf("%d,",&n)>0){
    Imap h;
    h[n]++;
    for(int i=1;i<4;i++){
      scanf("%d,",&n);
      h[n]++;
    }
    scanf("%d",&n);
    h[n]++;
    if(h.size()==2){
      for(Imap::iterator it=h.begin();it!=h.end();it++){
	if(it->second==4){
	  cout<<"four card";
	  break;
	}
	else if(it->second==3){
	  cout<<"full house";
	  break;
	}
      }
    }
    else if(h.size()==3){
      for(Imap::iterator it=h.begin();it!=h.end();it++){
	if(it->second==3){
	  cout<<"three card";
	  break;
	}
	else if(it->second==2){
	  cout<<"two pair";
	  break;
	}
      }
    }
    else if(h.size()==4) cout<<"one pair";
    else{
      int m[5];
      int i=0;
      for(Imap::iterator it=h.begin();it!=h.end();it++) m[i++]=it->first;
      sort(m,m+5);
      for(int j=0;j<4;j++){
	if(m[j+1]!=m[j]+1&&!(m[j]==1&&m[j+1]==10)){
	  cout<<"null";
	  break;
	}
	if(j==3) cout<<"straight";
      }
    }
    cout<<endl;
  }
    return 0;
}