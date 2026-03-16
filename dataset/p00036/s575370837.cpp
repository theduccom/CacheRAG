#include <iostream>
#include <string>

using namespace std;

char ret;

int main()
{

	string s;
	while(cin>>s){
	
	
	for(int i=1;i<8;i++){
		string s_tmp;
		cin>>s_tmp;
		s += s_tmp;
	}
	
	// 2次元配列を1次元的に処理
	for(int i=0;i<8*8;i++){
		if(s[i]=='1'){
			// Aかどうか
			if(s[i+1]=='1' && s[i+8]=='1' && s[i+9]=='1'){
				ret = 'A';
				break;
			}else if(s[i+8]=='1' && s[i+16]=='1' && s[i+24]=='1'){
				ret = 'B';
				break;
			}else if(s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1'){
				ret = 'C';
				break;
			}else if(s[i+7]=='1' && s[i+8]=='1' && s[i+15]=='1'){
				ret = 'D';
				break;
			}else if(s[i+1]=='1' && s[i+9]=='1' && s[i+10]=='1'){
				ret = 'E';
				break;
			}else if(s[i+8]=='1' && s[i+9]=='1' && s[i+17]=='1'){
				ret = 'F';
				break;
			}else if(s[i+1]=='1' && s[i+7]=='1' && s[i+8]=='1'){
				ret = 'G';
				break;
			}
		}
	}
	
	cout<<ret<<endl;
	}
	return 0;
}