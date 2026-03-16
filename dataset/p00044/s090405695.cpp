#include<iostream>
using namespace std;

int main(){
	bool dt[51001];
	dt[0]=false;dt[1]=false;dt[2]=true;
	int count=0;
	for(int i=3;i<51001;i++){
		for(int j=2;j<i && j<5000;j++){
			if(dt[j]==true){if(i%j==0)count++;}
		}
		if(count==0){dt[i]=true;}else{dt[i]=false;}
		count=0;
	}
	int n=0;
	while(cin>>n){
		int i=0;
		int ansf=0,ansl=0;
		for(i=1;i<n;i++){
			if(dt[i]==true){ansf=i;}
		}
		i++;
		while(i>0){
			if(dt[i]==true){ansl=i;i=-10;}
			i++;
		}
		cout<<ansf<<" "<<ansl<<endl;
	}
	return 0;
}