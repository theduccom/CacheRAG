#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#include<complex>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int> PI;
#define MAX 1000009
ll m=0; int n=0; int ans=0;
bool flag;
/*void dfs(int num){
 if(flag) return;
 if(ans==num){flag=true;return;}
 if(num>ans){memo[num]=false;return;}
 else rep(i,n){
 cout<<num<<endl;
 if(num+v[i]<=ans&&memo[num+v[i]])dfs(num+v[i]);
 }
 memo[num]=false;
 return;
 }*/
int main(){
    vector<bool>check(MAX+1);  //index number will be checked
    rep(i, MAX+1)check[i] = true;
    vector<int>Primenumber(MAX+1,0); //Primearray
    int counter =0;                  //Primearray counter;
    for(int i = 2; i<MAX+1;i++){
        if(check[i]){
            for(int j = 2;i*j<MAX;j++)
                check[i*j] = false;//??´????°??????Primearray????????´???????????????????°??????¨???false???
            Primenumber[counter] = i;
            counter++;
        }
    }
    while(cin>>n>>m,n+m){
        vi v;
        vi hoge;
        int temp;
        flag=false;
        int ans=0;
        rep(i,n){cin>>temp; v.push_back(temp);}
        for(int i=(int)m;i>=0;i--){
            if(check[i]){
                hoge.push_back(i);
            }
        }
        sort(hoge.begin(), hoge.end(), greater<int>());
        bool array[MAX]; rep(i,MAX)array[i]=false;
        rep(i,n)array[v[i]]=true;
        for(int i=1;i<=m;i++) {
            if(array[i])rep(j,n)if(i+v[j]<=m)array[i+v[j]]=true;
        }
        rep(i,hoge.size()){
            
            if(array[hoge[i]]){
                ans=hoge[i]; flag=true; break;
            }
        }
        if(flag) cout<<ans<<endl;
        else cout<<"NA"<<endl;
    }
}