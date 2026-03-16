#include<iostream>
#include<cmath>
#include<vector>
#define pb push_back
using namespace std;
const int MAX = 11000; 
bool prime[MAX];
typedef pair<int,int> P;
vector<P> vec;
void eratos(){
  for(int i=0;i<MAX;i++)prime[i] = false;
  for(int i=3;i<MAX;i+=2)prime[i] = true;
  prime[2] = true;
  int lim = (int)sqrt((double)MAX)+1;
  for(int i=3;i<=lim;i+=2){
    if(!prime[i])continue;
    for(int j=i+i;j<MAX;j+=i)prime[j] = false;
  }

  for(int i=2;i<MAX;i++){
    if(prime[i] && prime[i+2]){
      vec.pb(P(i,i+2));
    }
  }

}
 
int main(){
  int n,q;
  eratos();
  while(true){
    cin >> n;
    if(n == 0)break;
    for(int i = 0;i<vec.size();i++){
      if(vec[i].second > n){
	cout << vec[i-1].first << " " << vec[i-1].second << endl;
	break;
      }
    }   

  }
  return 0;
}