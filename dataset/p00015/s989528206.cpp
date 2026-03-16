#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;cin>>N;
  for(int i=0;i<N;i++){
    string num1,num2;
    cin>>num1>>num2;
    if(num1.size()==num2.size()&&num1.size()>80||num2.size()>80){
      cout<<"overflow"<<endl;
      continue;
    }
    int ma,mi;
    stack<int> sum;
    string lnum,snum;
    if(num1.size()>num2.size()){
      ma=num1.size();lnum=num1;
      mi=num2.size();snum=num2;
    }else{
      ma=num2.size();lnum=num2;
      mi=num1.size();snum=num1;
    }
    int keta=0;
    for(int i=ma-1;i>=0;i--){
      int a,b;
      a=lnum[i]-'0';
      if(mi<=0)
	b=0;
      else{
	b=snum[mi-1]-'0';
	mi--;
      }
      int summ=a+b+keta;
      if(summ>=10){
	sum.push(summ%10);
	keta=1;
      }else if(summ<=9){
	sum.push(summ);
	keta=0;
      }
    }
    if(keta==1)
      sum.push(1);
    if(sum.size()>80)
      cout<<"overflow"<<endl;
    else{
      int k=sum.size();
      for(int i=0;i<k;i++){
	cout<<sum.top();
	sum.pop();
      }
      cout<<endl;
    }
  }
  return 0;
}