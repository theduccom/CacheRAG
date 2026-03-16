#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,num,flag=0,flag2=0;
  long long tanka,sell;
  while(cin>>n,n!=0){
    flag=0;flag2=0;
    vector<int> nu;
    vector<int> vi;
    vector<pair<int,long long> > pii;
    for(int i=0;i<n;i++){
      cin>>num>>tanka>>sell;
      for(int j=0;j<vi.size();j++){
	if(num==vi[j]){
	  flag2=1;
	  break;
	}
      }
      if(flag2==0){
	flag=0;
	for(int j=pii.size()-1;j>=0;j--){
	  if(pii[j].first==num){
	    flag=1;
	    pii.push_back(make_pair(num,((tanka*sell)+pii[j].second)));
	    if(((tanka*sell)+pii[j].second)>=1000000)
	      vi.push_back(num);
	    break;
	  }
	}
	if(flag==0){
	  nu.push_back(num);
	  pii.push_back(make_pair(num,tanka*sell));
	  if((tanka*sell)>=1000000)
	    vi.push_back(num);
	}
      }
    }
    if(vi.empty())
      cout<<"NA"<<endl;
    else{
      for(int k=0;k<nu.size();k++){
	for(int l=0;l<vi.size();l++){
	  if(nu[k]==vi[l])
	    cout<<nu[k]<<endl;
	}
      }
    }
  }
  return 0;
}