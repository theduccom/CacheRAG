#include <iostream>
using namespace std;

int h,w;
char t[102][102];

int main(void){
	while(cin>>h>>w,h||w){
		for(int i=0;i<h;i++){
			cin>>t[i];
		}
		int i=0,j=0;
		while(t[i][j] != '.' && t[i][j] != 'x'){
			int ti = i;
			int tj = j;
			if(t[i][j] == '>')
				j++;
			else if(t[i][j] == '<')
				j--;
			else if(t[i][j] == 'v')
				i++;
			else
				i--;

			t[ti][tj] = 'x';
		}
		if(t[i][j] == 'x'){
			cout<<"LOOP\n";
		}
		else{
			cout<<j<<" "<<i<<endl;
		}
	}

	return 0;
}