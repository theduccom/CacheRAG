#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<climits>
#include<cmath>
#include<cassert>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;

int n;

vector<int> prime;
vector<int> prime_list;
void prime_set(long n){
        n+=100;
        prime.resize(n);
        for(int i=0;i<n;i++){
                prime[i]=1;
        }
        prime[0]=prime[1]=0;
        for(int i=0;i*i<n;i++){
                if(prime[i]){
                        for(int j=i*2;j<n;j+=i){
                                prime[j]=0;
                        }
                }
        }
        for(int i=0;i<n;i++){
                if(prime[i])prime_list.push_back(i);
        }
}

bool input(){
	cin>>n;
	if(n==0){
		return false;
	}
  return true;
}

int solve(){
	int sum=0;
	for(int i=0; i<n ; i++){
		sum=sum+prime_list[i];
	}

  return sum;
}


int main(){
	prime_set(10000000);
  while(input()){
    cout<<solve()<<endl;
  }
  return 0;
}