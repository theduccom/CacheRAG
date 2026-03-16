#include<iostream>
using namespace std;

int main(){
	char s[100+1];
	char res[1024];
	int i,j;

	while(cin >> s){
		i=0;
		j=0;


		while(s[i]!='\0'){

			if(s[i]!='@'){
				res[j]=s[i];
				++j;
			}

			else if(s[i]=='@'){
				++i;
				for(int k=0;k<s[i]-'0';++k){
					res[j]=s[i+1];
					++j;
				}
				++i;
			}
			++i;
		}
		res[j]='\0';

		cout<<res<<endl;



	}
	return 0;
}








		