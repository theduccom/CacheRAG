#include<iostream>
#include<utility>
using namespace std;

void selectionsort(int A[], int N){
  int minj;
  for(int i=N-1;i>=0;i--){
    minj = i;
    for(int j=i-1;j>=0;j--){
      if(A[j]<A[minj]) minj = j;
    }
    if(minj != i){
      swap(A[minj], A[i]);
    }
  }
}

int main(){
  int n, m;
  while(1){
    int sum = 0;
    cin>>n>>m;
    if(!(n * m)) return 0;
    int  P[1000];
    for(int i=0;i<n;i++){
      cin>>P[i];
      sum += P[i];
    }
    selectionsort(P, n);
    for(int i=1;i<=n/m;i++){
      sum -= P[i*m-1];
    }
    cout<<sum<<endl;
  }
}

