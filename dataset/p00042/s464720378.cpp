#include<iostream>
using namespace std;
int main(){
  int W,N;
  int count = 0;
  while(cin >> W){
    if(W==0) break;
    cin >> N;
    count++;
    int item[W+1];
    for(int i=0;i<=W;i++) item[i] = 0;

    int v,w;
    char c;
    for(int i=0;i<N;i++){
      cin >> v >> c >> w;
      for(int j=W-w;j>=0;j--)
        if(item[j]+v>item[j+w]) item[j+w] = item[j]+v;
    }
    int ansv, answ;
    ansv = answ = -1;
    for(int i=0;i<=W;i++){
      if(item[i] > ansv){
        ansv = item[i];
        answ = i;
      }
    }
    cout << "Case " << count << ":" << endl << ansv << endl << answ << endl;
  }
}

