#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fr first
#define sc second
typedef pair<int, int> Pii;
typedef vector<int> Vi;
const int INF = (1<<30);
const int dx[]={1,0,-1,0}, dy[]={0,-1,0,1};

int main() {
  int n;
  while( cin >> n, n ) {
    int data[10][10], h[10]={0}, w[10]={0};
    int sum = 0;
    for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
	cin >> data[i][j];
	h[i] += data[i][j];
	w[j] += data[i][j];
	sum += data[i][j];
      }
    }

    for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
	printf("%5d", data[i][j]);
      }
      printf("%5d\n", h[i]);
    }

    for(int i=0; i<n; i++) printf("%5d", w[i]);
    printf("%5d\n", sum);
  }
}