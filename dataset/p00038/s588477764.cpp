#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#define INF 1000000000
#define mod 1000000007
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),x.end()
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;

int c[6];

void DEBUG(){
  rep(i,5)cout<<c[i]<<" ";
  cout<<endl;
}

void tranp_sort(){
  for(int i=0;i<5;i++){
    if(c[i]==1)c[i]+=13;
  }
  sort(c,c+5);
  for(int i=0;i<5;i++){
    if(c[i]==14)c[i]=1;
  }
}

void input(){  
  getchar();cin>>c[1];
  getchar();cin>>c[2];
  getchar();cin>>c[3];
  getchar();cin>>c[4];
}


bool one_pair(){
  for(int i=1;i<5;i++){
    if(c[i]==c[i-1])return true;
  }
  return false;
}

bool two_pair(){
  int cnt=0;
  map<int,int>m;
  for(int i=0;i<5;i++)m[c[i]]++;
  for(int i=1;i<=13;i++){
    if(m[i]==2)cnt++;
  }
  if(cnt==2)return true;
  else return false;
}

bool three_card(){
  for(int i=2;i<5;i++){
    if(c[i]==c[i-1]&&c[i-1]==c[i-2])return true;
  }
  return false;
}

bool four_card(){
  for(int i=3;i<5;i++){
    if(c[i]==c[i-1]&&c[i-1]==c[i-2]&&c[i-2]==c[i-3])return true;
  }
  return false;
}

bool fullhouse(){
  bool a,b;
  a=b=false;
  map<int,int>m;
  for(int i=0;i<5;i++)m[c[i]]++;
  for(int i=1;i<=13;i++){
    if(m[i]==3)a=true;
    if(m[i]==2)b=true;
  }
  if(a==true&&b==true)return true;
  else return false;
}

bool straight(){
  //DEBUG();
  int tmp=c[0];
  if(c[0]==2&&c[1]==3&&c[2]==4&&c[3]==5&&c[4]==1)return true;
  for(int i=0;i<5;i++){
    if(c[i]==1)tmp++;
    //cout<<c[i]<<" = "<<(tmp+i)%14<<endl;
    if((tmp+i)%14!=c[i])return false;
  }
  return true;
}

int main(){

  while(cin>>c[0]){
    input();
    tranp_sort();
    if(four_card())cout<<"four card"<<endl;
    else if(fullhouse())cout<<"full house"<<endl;
    else if(straight())cout<<"straight"<<endl;
    else if(three_card())cout<<"three card"<<endl;
    else if(two_pair())cout<<"two pair"<<endl;
    else if(one_pair())cout<<"one pair"<<endl;
    else cout<<"null"<<endl;
  }
  return 0;
}