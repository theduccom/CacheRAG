#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){

  vector<int>prime;
  bool flag[100000];
  memset(flag,true,sizeof(flag));
  for(int i=2;i<100000;i++)
    {
      if(flag[i])
	{
	  prime.push_back(i);
	  for(int j=i+i;j<100000;j+=i)
	    flag[j]=false;
	}
    }

  int n;
  for(;cin>>n;)
    {
      vector<int>::iterator it1=lower_bound(prime.begin(),prime.end(),n);
      it1--;
      vector<int>::iterator it2=upper_bound(prime.begin(),prime.end(),n);
      cout<<*(it1)<<" "<<*(it2)<<endl;
    }

}