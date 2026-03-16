#include<iostream>
#include<algorithm>


using namespace std;

int main(){

  int m, n;


  while(1){

    cin >> n >> m;

    if(n == 0 && m == 0)break;

    int data[n];

    for(int i = 0; i < n; i++){
      cin >> data[i];
    }

    sort(data, data+n);
    reverse(data, data+n);


    for(int i = m-1; i < n - (n%m); i+=m){
      data[i] = 0;
    }
    int sum = 0;

    for(int i = 0; i < n; i++){
      sum += data[i];
    }

    cout << sum << endl;

  }

  return 0;
}