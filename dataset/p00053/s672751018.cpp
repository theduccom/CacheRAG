#include<iostream>
#include<vector>
#define m 110000
using namespace std;
 int main(){
  int n,cnt;
  while(1){
    cin>>n;
    if(n==0) break;
    cnt=0;
    vector<bool>a(m+1,true);
    for(int i=2;i*i<=m;i++)
         if(a[i]) for(int j=i+i;j<=m;j+=i)  a[j]=false;   
    long long sum=0;   
    for(int i=2;i<=m;i++){
            if(a[i]!=0 && cnt<n) { sum+=i;cnt++;}
    }
    cout << sum << endl;  
  } 
  return 0;
}