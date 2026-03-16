#include<iostream>
#include<string>
#include<vector>
using namespace std;

string S;
char U[11]="0123456789";
int junjo[4]={0,0,1,1};

long long STOI(string V){
	int LEN=V.size();
	if(LEN==0){return 0;}
	return (V[LEN - 1] - '0') + 10 * ( STOI(V.substr(0, LEN - 1)) );
}
long long calc(int L,int R){
	int K=0;
	vector<int>junjo2[4];
	for(int i=0;i<4;i++){
		junjo2[junjo[i]].push_back(i);
	}
	for(int i=0;i<4;i++){
		if(junjo2[i].size()>=1){
			for(int j=R-1;j>=L;j--){
				if(S[j]=='('){K++;}
				if(S[j]==')'){K--;}
				for(int k=0;k<junjo2[i].size();k++){
					if(junjo2[i][k]==0){
						if(S[j]=='+' && K==0){
							return calc(L,j)+calc(j+1,R);
						}
					}
					if(junjo2[i][k]==1){
						if(S[j]=='-' && K==0){
							return calc(L,j)-calc(j+1,R);
						}
					}
					if(junjo2[i][k]==2){
						if(S[j]=='*' && K==0){
							return calc(L,j)*calc(j+1,R);
						}
					}
					if(junjo2[i][k]==3){
						if(S[j]=='/' && K==0){
							return calc(L,j)/calc(j+1,R);
						}
					}
				}
			}
		}
	}
	if(S[L]=='(' && S[R-1]==')'){return calc(L+1,R-1);}
	return STOI(S.substr(L,R-L));
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>S;
		cout<<calc(0,S.size()-1)<<endl;
	}
}