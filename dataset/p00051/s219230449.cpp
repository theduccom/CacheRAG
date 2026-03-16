#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<functional>
#include<string>
#include<string.h>

using namespace std;

int main(){
	
	int n,diff,max_kazu[9],min_kazu[9];
	char cdiff[9],keta[9];
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		//配列の初期化
		memset(max_kazu,'0',sizeof(max_kazu));
		memset(min_kazu,'0',sizeof(min_kazu));
		memset(keta,'\0',sizeof(keta));
		memset(cdiff,'\0',sizeof(cdiff));
		
		
		cin>>keta;
		
		//char型からint型への変換
		for(int j=0;j<8;j++){
			min_kazu[j]=keta[j]-'0';
			max_kazu[j]=keta[j]-'0';
		}
		
		//昇順ソート
		stable_sort(min_kazu,min_kazu+8);
		//降順ソート
		stable_sort(max_kazu,max_kazu+8,greater<int>());
		

		/*cout<<endl;
		for(int j=0;j<8;j++){
			cout<<max_kazu[j];
		}
		cout<<endl;
		
		for(int j=0;j<8;j++){
			cout<<min_kazu[j];
		}
		cout<<endl;
		cout<<"--------"<<endl;*/
		
		for(int j=7;j>=0;j--){
			
			if((max_kazu[j]-min_kazu[j])<0){
				
				diff=(10+max_kazu[j])-min_kazu[j];
				
				//繰り下がり作業
				for(int k=j-1;k>=0;k--){
					if(max_kazu[k]!=0){
						max_kazu[k]--;
						for(int m=k+1;m<j;m++){
							max_kazu[m]=9;
						}
						break;
					}
				}
			}
			else{
				diff=max_kazu[j]-min_kazu[j];
			}
			
			cdiff[j]=diff+'0';
		}
		
		cout<<atoi(cdiff)<<endl;
		//cout<<endl;
	}
}