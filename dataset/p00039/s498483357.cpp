#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void){
	
	
	vector<int> temp;
	vector<int> num;
	char ruman_num[100]={'0'};
	int sum;
	
	
	while(scanf("%s",ruman_num)!=EOF){
		sum=0;
		
		for(int i=0;i<100;i++){
			if(ruman_num[i]=='I'){
				num.push_back(1);
			}else if(ruman_num[i]=='V'){
				num.push_back(5);
			}else if(ruman_num[i]=='X'){
				num.push_back(10);
			}else if(ruman_num[i]=='L'){
				num.push_back(50);
			}else if(ruman_num[i]=='C'){
				num.push_back(100);
			}else if(ruman_num[i]=='D'){
				num.push_back(500);
			}else if(ruman_num[i]=='M'){
				num.push_back(1000);
			}else if(ruman_num[i]=='0'){
				break;
			}
		}
		
		num.push_back(0);
		for(int i=0;i<(num.size())-1;i++){
			if(num[i]<num[i+1]){
				temp.push_back(num[i+1]-num[i]);
				i++;
			}else{
				temp.push_back(num[i]);
			}
		}
			
			
		for(int i=0;i<temp.size();i++){
			sum=sum+temp[i];
		}
			
			
		cout<<sum<<endl;
		temp.clear();
		num.clear();
		for(int i=0;i<100;i++){
			ruman_num[i]='0';
		}
	}
	return 0;
}