#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int max(int a,int b){
	if(a>=b)return a;
	else return b;
}

int min(int a,int b){
	if(a>=b)return b;
	else return a;
}

void swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void babbleSort(int *data,int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(data[j]>=data[j-1]){
				swap(&data[j],&data[j-1]);
			}
		}
	}
}


using namespace std;

/*
cin.ignore();
	getline(cin,dataStr);
	data = new int[n];
	stringToInteger(&dataStr,data,n);
*/

void stringToInteger(string *str,int *data,int n){
	for(int i=1;i<=n;i++){
		int spaceN = str->find(' ',0);

		data[i] = atoi(str->substr(0,spaceN).c_str());
		str->erase(0,spaceN+1);
	}
}



int dp[1010];
//dp[i] i:重さ




int main(){


	int w,n;
	int cnt=1;
	while(1){
		cin>>w;
		if(w==0)break;

		cin>>n;

		for(int i=0;i<=w;i++){
			dp[i]=0;
		}
		int value,weight;
		for(int i=0;i<n;i++){
			scanf("%d,%d",&value,&weight);
			for(int j=w;j>=0;j--){
				if((j==0||dp[j]>0)&&((j+weight)<=w)){
					int tmp = dp[j]+value;
					dp[j+weight] = max(tmp,dp[j+weight]);
				//	cout<<j+weight<<" "<<dp[j+weight]<<endl;
				}
			}
		}

		int ans=0;
		int ansCnt=0;
		for(int i=0;i<=w;i++){
			if(ans<dp[i]){
				ans=dp[i];
				ansCnt=i;
			}
		}
		cout<<"Case "<<cnt<<":"<<endl;
		cout<<ans<<endl;
		cout<<ansCnt<<endl;
		cnt++;
	}



	return 0;
}