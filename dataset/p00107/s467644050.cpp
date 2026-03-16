#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

#define EPS (1e-10)
#define EQ(a,b) (abs(a-b)<EPS)

int main(){

	int wide,height,length;
	while(cin>>height>>wide>>length&&!(wide==0&&height==0&&length==0)){
		priority_queue<int,vector<int> ,greater<int> > pq;
		pq.push(height);
		pq.push(wide);
		pq.push(length);

		int l1,l2;
		l1=pq.top(),pq.pop();
		l2=pq.top(),pq.pop();
		int n;
		cin>>n;
		double d=sqrt(((double)l1/2)*((double)l1/2)+((double)l2/2)*((double)l2/2));
		for(int i = 0; i < n; i++){
			int r;
			cin>>r;
			// ツ禿シツづィツ古サツつイツづづ可チツーツズツつェツ運ツづ堕つアツづ淞づゥツつゥツ計ツ算
			if(!EQ(d,r)&&r>d)
				cout<<"OK"<<endl;
			else
				cout<<"NA"<<endl;
		}
	}

	return 0;
}