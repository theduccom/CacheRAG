#include<bits//stdc++.h>
using namespace std;

int main(){
	int a,b;
	int ca=0;
	double cb=0;
	int i=0;
	while(scanf("%d,%d",&a,&b)!=EOF){
		ca+=a*b;
		cb+=b;
		i++;
		}
		double cc=cb/i;
		double cd=round(cc);
		cout<<ca<<endl<<cd<<endl;
		return 0;
	}