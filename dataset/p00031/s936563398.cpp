#include<iostream>
#include<stack>

using namespace std;

const int weight[] = {1,2,4,8,16,32,64,128,256,512};

int main(){
  int req,i,n;
  stack<int> st;
  while(cin >> req) {
    n=0;
    for(i=9;i>=0;i--){
      if(req >= n + weight[i]) {
	n += weight[i];
	st.push(weight[i]);
      }
    }
    while(st.size()){
      n = st.top(); st.pop();
      cout << n;
      if(st.size()) cout << ' ';
    }
    cout << endl;
  }
  return 0;
}
      
      