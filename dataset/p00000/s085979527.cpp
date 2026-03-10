#include<iostream>
#include<algorithm>
using namespace std;
int te[114514];
pair<int,int> ii[114514];
pair<int,int> pp[114514];
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  for(int n=1;n<=9;n++){
    for(int m=1;m<=9;m++){
      cout <<n<<'x'<<m<<"="<<n*m<<'\n';
    }
  }
  return (0);
}

