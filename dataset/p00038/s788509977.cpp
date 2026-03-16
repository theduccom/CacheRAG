#include<iostream>
#include<cstdio>
#include<string>
#include<string.h>
#include<algorithm>

using namespace std;

int main(void){
	
	string yaku[]={"one pair","two pair","three card","full house","four card","straight","null"};
	int tefuda[5],count[14];
	bool flag,straight;

	while(scanf("%d,%d,%d,%d,%d",&tefuda[0],&tefuda[1],&tefuda[2],&tefuda[3],&tefuda[4])!=EOF){
		
		flag=true;
		straight=true;
		
		memset(count,0,sizeof(count));
		//sort
		sort(tefuda,tefuda+5);
		//1-4 pair or fullhouse 
		for(int i=0;i<4;i++){
			for(int j=i+1;j<5;j++){
				if(tefuda[i]==tefuda[j]){
					count[tefuda[i]]++;
					flag=false;
				}	
			}
		}
		

		//straight
		if(flag){
			if(tefuda[0]==1 && tefuda[1]==2){
				for(int i=2;i<5;i++){
					if(tefuda[i]!=i+1){
						straight=false;
					}
				}
			}
			else if(tefuda[0]==1 && tefuda[4]==13){
				for(int i=1;i<4;i++){
					if(tefuda[i]!=i+9){
						straight=false;
					}
				}
			}
			else{
				for(int i=tefuda[0];i<5+tefuda[0];i++){
					if(tefuda[i-tefuda[0]]!=i){
						straight=false;
					}
				}	
			}
			
			if(straight){
				cout<<yaku[5]<<endl;	//straight
				//break;
			}
			else{
				cout<<yaku[6]<<endl;	//null
				//break;
			}
		}
		else{
			sort(count,count+14);
			if(count[13]==6){
				cout<<yaku[4]<<endl;
			}else if(count[12]==1 && count[13]==3){
				cout<<yaku[3]<<endl;
			}else if(count[12]==0 && count[13]==3){
				cout<<yaku[2]<<endl;
			}else if(count[12]==count[13]){
				cout<<yaku[1]<<endl;
			}else if(count[12]<2 && count[13]==1){
				cout<<yaku[0]<<endl;
			}
		}

	}
}