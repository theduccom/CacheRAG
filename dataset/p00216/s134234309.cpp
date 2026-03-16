                                                              
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<complex>
using namespace std ;
typedef vector<int> vi ;
typedef vector<vi> vvi ;
typedef vector<string> vs ;
typedef pair<int, int> pii;
typedef long long ll ;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()

int main(void){
  int n;
  while(cin>>n,n!=-1){
    int sum = 0 ;
    if(n <= 10)sum = 1150 ;
    else if(n <= 20)sum += 1150 + (n-10) * 125;
    else if(n <= 30)sum += 1150 + 1250 + (n-20) * 140;
    else sum += 1150 + 1250 + 1400 + (n-30) * 160;

    cout<<4280-sum<<endl;

  }
}