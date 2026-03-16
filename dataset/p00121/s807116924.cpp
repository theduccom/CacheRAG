#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i = a;i<n;i++)

int tenPow(int num){
  int ans =1;
  rep(i,0,num){
    ans*=10;
  }
  return ans;
}
int main(){
    map<int,int> Puzzle;
    int pa = 1234567;
    queue<int> q;
    q.push(pa);
    int BFSnum=q.size();
    int nowpos=0;
    while(!q.empty()){
      if(BFSnum==0){
        BFSnum=q.size();
        nowpos++;
      }
      BFSnum--;
      int num=q.front();
      q.pop();
      if(Puzzle[num]!=0){
        continue;
      }
      else{
        Puzzle[num]=nowpos;
      }
      int zeropos;
      int tmp=num;
      for(int i = 0;true;i++){
        if(tmp%10==0){
          zeropos=i;
          break;
        }
        tmp/=10;
      }
      tmp = num;
      if(!(zeropos==7 || zeropos==3)){
        int swapnum=(tmp/tenPow(zeropos+1))%10;
        swapnum =tmp - swapnum*tenPow(zeropos+1)+swapnum*tenPow(zeropos);
        int pushnum;
        pushnum=swapnum;
        q.push(pushnum);
      }
      if(!(zeropos==4 || zeropos==0)){
        int swapnum=(tmp/tenPow(zeropos-1))%10;
        swapnum =tmp - swapnum*tenPow(zeropos-1)+swapnum*tenPow(zeropos);
        int pushnum;
        pushnum=swapnum;
        q.push(pushnum);
      }
      if(zeropos>=4){
        int swapnum=(tmp/tenPow(zeropos-4))%10;
        swapnum =tmp - swapnum*tenPow(zeropos-4)+swapnum*tenPow(zeropos);
        int pushnum;
        pushnum=swapnum;
        q.push(pushnum);
      }
      if(zeropos<=3){
        int swapnum=(tmp/tenPow(zeropos+4))%10;
        swapnum =tmp - swapnum*tenPow(zeropos+4)+swapnum*tenPow(zeropos);
        int pushnum;
        pushnum=swapnum;
        q.push(pushnum);
      }
    }
    while(true){
      int p=0;
      int cnum;
      string c;
      cin >>c;
      stringstream ss;
      ss << c;
      ss >> cnum;
      rep(j,0,7){
        cnum*=10;
      }
      p+=cnum;
      if(cin.eof())break;
      rep(i,1,8){
        cin >>c;
        stringstream ss;
        ss << c;
        ss >> cnum;
        rep(j,0,7-i){
          cnum*=10;
        }
        p+=cnum;
      }
      if(p == 1234567)cout <<0<<endl;
      else cout <<Puzzle[p]<<endl;
    }
  return 0;
}

