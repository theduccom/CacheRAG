#include <iostream>
using namespace std;

int main(){
  int N,a,b;
  int p_index,length,index;
  while(cin >> N && N != 0){
    //    cout << N << endl;
    int sum = 0;int temp = 0;
    for(int k=0;k<N;k++){
      cin >> p_index >> a >> b;
      //      cout << p_index << endl;
      temp = a + b;
      index = temp> sum? p_index : index;
      sum = temp>sum ? temp : sum;

      //      cout << p_index << " " << index << " " << temp << " " << sum << endl;
    }
    cout << index << " " << sum << endl;

  }
}