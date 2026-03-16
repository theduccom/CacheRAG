#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sum(string A, string B);
int main() {
  int n;
  cin>>n;
  string a,b;
  for(int i=0;i<n;i++) {
    cin>>a;
    cin>>b;
    if((int)a.size()>80 || (int)b.size()>80)
      cout<<"overflow\n";
    else{
      vector<int> tmp=sum(a,b);
      if(tmp.size()>80)
	cout<<"overflow\n";
      else {
	string S="";
	for(int i=0;i<(int)tmp.size();i++) {
	 S+=to_string(tmp[i]);
	}
	cout<<S<<endl;
      }
    }
  }   
  return 0;
}
vector<int> sum(string A, string B) {
  int  a_size=A.size()-1;
  int  b_size=B.size()-1;
  int end=-1;
  vector<int> tmp;
  int Dr=0;
  while(true) {
    if(a_size<0 ){
      end=0;
      break;
    }
    if(b_size<0){
      end=1;
      break;
    }
    int a=(int)A[a_size]-(int)'0';
    int b=(int)B[b_size]-(int)'0';
    int n=a+b+Dr;
    if(n>=10){
      tmp.push_back(n-10);
      Dr=1;
    }
    else{
      Dr=0;
      tmp.push_back(n);
    }
    a_size--;
    b_size--;
  }

  if(end==0) {
    for(int i= b_size;i>=0;i--){
      int n=(int)B[i]-int('0')+Dr;
      if(n>=10) {
	tmp.push_back(n-10);
	Dr=1;
      }
      else{
	tmp.push_back(n);
	Dr=0;
      }
    }
  }
  else if(end==1){
    for(int i=a_size;i>=0;i--){
      int n=(int)A[i]-int('0')+Dr;
      if(n>=10){
	tmp.push_back(n-10);
	Dr=1;
      }
      else{
	tmp.push_back(n);
	Dr=0;
      }
    }
  }
  if(Dr==1)
    tmp.push_back(1);
  reverse(tmp.begin(),tmp.end());
  return tmp;
}

