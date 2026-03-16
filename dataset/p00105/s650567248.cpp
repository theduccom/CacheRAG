#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef pair<string,int> Pairsi;

int main(){
	priority_queue<Pairsi,vector<Pairsi>,greater<Pairsi> > q;
	Pairsi psi;
	vector<int> tn;
//	int tn[1000],tni=0;
	int c=0,n;
	string s,ts;


//input
	while(1){
		cin >> s >> n;
		if(cin.eof())break;
		q.push(make_pair(s,n));
		c++;
	}

//output
/*
	for(int i=0;i<c;i++){
		psi = q.top();
		q.pop();

		if(i==0){
	
		}else if(ts==psi.first){
			cout << "equal";
		}else{
			cout << ts << endl;

			for(int j=0;j<tn.size();j++){
				cout << tn[j] << ' ';
			}
			tn.clear();
			cout << endl;
		}

		ts = psi.first;
		tn.push_back(psi.second);
//		tn[tni++] = psi.second;

	}*/
	for(int i=0;i<c;i++){
		psi = q.top();
		q.pop();

		if(ts==psi.first){
			cout << " " << psi.second;
		}else{
			if(i!=0){
				cout << endl;
			}
			cout << psi.first << endl;
			cout << psi.second;
		}

		ts = psi.first;
	}

	puts("");

	return 0;
}