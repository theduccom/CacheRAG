#include<iostream>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;

int main(){
  int a[8];
  for(int i=0;i<8;i++)a[i] = i;
  map<string,int> m;
  do{
    string s;
    for(int i=0;i<8;i++)s += a[i]+'0';
    m.insert( map<string,int>::value_type(s,-1) );
  }while(next_permutation(a,a+8));

  m["01234567"] = 0;

  queue<string> q;
  q.push("01234567");

  string str;
  int tmp;
  while(q.size()){
    str = q.front();
    q.pop();
    tmp = m[str];
    
    int pos;
    for(int i=0;i<8;i++){
      if(str[i] == '0')pos = i;
    }
    
    int c[4] = {-4,-1,1,4};
    for(int i=0;i<4;i++){
	if(pos + c[i] < 0 || pos + c[i] > 7 || (pos==3 && c[i]==1) || pos==4 && c[i]==-1 )continue;
	swap(str[pos],str[pos+c[i]]);
	if(m[str]<0){
	  //cout << tmp << ":[" << str << "]" << endl;
	  q.push(str);
	  m[str] = tmp+1;
	}
	swap(str[pos],str[pos+c[i]]);  
      }
    }

  while(cin >> a[0]){
    for(int i=1;i<8;i++)cin >> a[i];
    string s;
    for(int i=0;i<8;i++)s += a[i]+'0';

    cout << m[s] << endl;
  }
}