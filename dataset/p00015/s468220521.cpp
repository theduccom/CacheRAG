#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >>N;
	for(int i=0;i<N;i++){
		string s1,s2;
		cin >>s1;
		cin >>s2;
		
		if(s1.size()<s2.size()){
			string tmp = s1;
			s1 = s2;
			s2 = tmp;
		}
		
		if(s1.size()>80){
			cout <<"overflow" <<endl;
			continue;
		}
		
		int A[80];
		int C = 0;
		for(int j=0;j<s1.size();j++){
			int tmp = (int) (s1[s1.size()-1-j] - '0') + C;
			if(j<s2.size()){
				tmp += (int) (s2[s2.size()-1-j] - '0');
			}
			A[j] = tmp % 10;
			C = tmp/10;
		}
		if(s1.size()==80&&C==1){
			cout <<"overflow" <<endl;
		}else{
			if(C==1){
				cout <<C;
			}
			for(int j=s1.size()-1;j>=0;j--){
				cout <<A[j];
			}
			cout <<endl;
		}
	}
	return 0;
}