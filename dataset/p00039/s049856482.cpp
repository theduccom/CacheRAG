#include <iostream>
#include <vector>
using namespace std;

int main(){
	char input[100];
	vector<int> v;
	int tmp,sum;

	while(cin>>input){
		sum=0;
		for(int i=0;input[i]!='\0';i++){
			if(input[i]!='\n'){
				if(input[i]=='I'){
					v.push_back(1);
				}else if(input[i]=='V'){
					v.push_back(5);
				}else if(input[i]=='X'){
					v.push_back(10);
				}else if(input[i]=='L'){
					v.push_back(50);
				}else if(input[i]=='C'){
					v.push_back(100);
				}else if(input[i]=='D'){
					v.push_back(500);
				}else if(input[i]=='M'){
					v.push_back(1000);
				}
			}
		}

		tmp=v[0];sum+=tmp;
		for(int i=1;i<v.size();i++){
			if(tmp>=v[i]){
				sum+=v[i];
			}else{
				sum+=v[i]-2*tmp;
			}
			tmp=v[i];
		}

		cout<<sum<<endl;
		v.clear();
	}
}