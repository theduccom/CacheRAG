#include<iostream>
#include<string>
using namespace std;

int main(){
	int i, n, run, out, score;
	string str;
	cin>>n;
	for(i=0;i<n;i++){
		score=run=out=0;
		while(true){
			cin>>str;
			if(str == "HIT"){
				if(run<3) run++;
				else score++;
			}
			if(str == "OUT"){
				out++;
				if(out>=3){
					cout<<score<<endl;
					break;
				}
			}
			if(str == "HOMERUN"){
				score+=run+1;
				run=0;
			}
		}
	}
	return 0;
}