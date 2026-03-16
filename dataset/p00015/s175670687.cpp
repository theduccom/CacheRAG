#include<iostream>
#include<cstdio>
#include<vector>
#include<stack>
using namespace std;

int main()
{
  int n;
  cin >> n;
  getchar();
  while( n --){
    int i;
    char s[1002] = {};
    int A[1000] = {} , B[1000] = {};
    stack<int> C;
    char a, b;
    int end;
    fgets(s, 1000, stdin);
    i = 100; int k = 0;
    while(1 ) {
      a = s[k++];
      if(a  == '\n') break;
      A[i] = a - '0';
      i--;
      if(i < 20)  break;
    }
    int j = 100;
     fgets(s, 1000, stdin);
     k = 0;
    while(1) {
      b = s[k++];
      if(b == '\n') break;
      B[j] = b - '0';
      j--;
      if(j < 20)  break;

    }
    if( i < 20  || j < 20 ) {  cout << "overflow" <<endl; continue; }

    if(i > j)
      end = 101 - j;
    else
      end = 101 - i;

    A[i++] += B[j++];
  
    for(int k = 0; k <= end ; i++, j++, k++) {
      A[i] += B[j];
      A[i] += A[i - 1] / 10;
      A[i - 1] %= 10;
      C.push(A[i - 1]);
    }
    if(C.top() == 0 && C.size() != 1) {
      C.pop();
    }
    end = C.size() - 1;
    if(end > 80){
      cout << "overflow" << endl;
      continue;
    }

    for(i = 0; i < end; i++) {
      cout << C.top();
      C.pop();
    }
  
    cout << endl;
  
  }
}