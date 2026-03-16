#include<iostream>
using namespace std;
int main(){
	char box[12][12]={0};
	while(cin>>box[1][1]){
		for(int i=2;i<=8;++i){
			cin>>box[i][1];
		}
		
		for(int i=2;i<=8;++i){
			for(int j=1;j<=8;++j){
				cin>>box[j][i];
			}
		}
		int firstx=-1,firsty;
		for(int i=1;i<=8&&firstx==-1;++i){
			for(int j=1;j<=8;++j){
				if(firstx==-1&&box[j][i]=='1'){
					firstx=j;
					firsty=i;
					break;
				}
			}
		}
		if(box[firstx][firsty+3]=='1'){
			cout<<'B'<<endl;
		}
		else if(box[firstx+3][firsty]=='1'){
			cout<<'C'<<endl;
		}
		else if(box[firstx-1][firsty+2]=='1'){
			cout<<'D'<<endl;
		}
		else if(box[firstx+2][firsty+1]=='1'){
			cout<<'E'<<endl;
		}
		else if(box[firstx+1][firsty+2]=='1'){
			cout<<'F'<<endl;
		}
		else if(box[firstx-1][firsty+1]=='1'){
			cout<<'G'<<endl;
		}
		else {
			cout<<'A'<<endl;
		}
	}
	return 0;
}