#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){
	int N;
	int ening=0;

	cin>>N;
	vector <int> tokuten;
	while(ening<N){
		int out=0;
		int point=0;
		bool base[3]={false};
		while(out<3){
			string str;
			cin>>str;
			int runner=0;
			switch (str[1])
			{
			
			case 'I'://HIT
				if(base[2]){
					point++;
					base[2]=false;
				}
				for(int i=1;i>=0;i--){
					if(base[i]){
						base[i]=false;
						base[i+1]=true;
					}
				}
				base[0]=true;
				break;
			case 'O'://HOMERUN
				
				for(int i=0;i<3;i++){
					if(base[i]){
						runner++;
					}
					base[i]=false;
				}
				point+=++runner;
				break;
			case 'U'://OUT
				out++;
				break;
			}
		}
		cout<<point<<endl;
		ening++;
	}

	return 0;
}