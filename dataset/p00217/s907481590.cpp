#include <iostream>

#include <queue>
using namespace std;

int main(){

  int n;
  while(1){
    cin >> n;
    if(n == 0) break;

    priority_queue< pair<int,int> > p;
    for(int i=0;i<n;i++){
      int t,d1,d2;
      cin >> t >> d1 >> d2;
      p.push( make_pair((d1+d2),t) );
    }
    cout << p.top().second << " " << p.top().first << "\n";

  }

}