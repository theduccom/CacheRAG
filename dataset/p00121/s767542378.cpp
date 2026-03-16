#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
typedef pair<int,int> P;
queue<P> q;
map<int,int> m;
map<int,int>::iterator ite;
int A,B,a[8],Q,n0,kaisu,dummy[9];
int* tens;
int main()
{
	tens=&dummy[1];
	tens[7]=1;
	for(int i=6;i>=-1;i--) tens[i]=tens[i+1]*10;
	m.insert(make_pair(1234567,0));
	q.push(P(1234567,0));
	while(!q.empty()){
		A=q.front().first;
		kaisu=q.front().second;
		q.pop();
		for(int i=0;i<8;i++) if( ( A/tens[i] ) % 10 == 0 ) n0 = i;
		if(n0<4){
			B = A - tens[n0+4]*( ( A/tens[n0+4] ) % 10) + tens[n0]*( ( A/tens[n0+4] ) % 10);
			ite=m.find(B);
			if(ite==m.end()){
				m.insert(make_pair(B,kaisu+1));
				q.push(P(B,kaisu+1));
			} 
		}
		
		if(4<=n0){
			B = A - tens[n0-4]*(( A/tens[n0-4] ) % 10)+ tens[n0]*(( A/tens[n0-4] ) % 10);
			ite=m.find(B);
			if(ite==m.end()){
				m.insert(make_pair(B,kaisu+1));
				q.push(P(B,kaisu+1));
			}
		}
		
		if(n0!=0&&n0!=4){
			B = A - tens[n0-1]*(( A/tens[n0-1] ) % 10)+ tens[n0]*(( A/tens[n0-1] ) % 10);
			ite=m.find(B);
			if(ite==m.end()){
				m.insert(make_pair(B,kaisu+1));
				q.push(P(B,kaisu+1));
			}
		}
		
		if(n0!=3&&n0!=7){
			B = A - tens[n0+1]*(( A/tens[n0+1] ) % 10) + tens[n0]*(( A/tens[n0+1] ) % 10);
			ite=m.find(B);
			if(ite==m.end()){
				m.insert(make_pair(B,kaisu+1));
				q.push(P(B,kaisu+1));
			}
		}
	}
	while(1){
		Q=0;
		for(int i=0;i<8;i++) {
			if(scanf("%d",&a[i])==EOF) return 0;
			Q+=tens[i]*a[i];
		}
		printf("%d\n",m[Q]);
	}
}