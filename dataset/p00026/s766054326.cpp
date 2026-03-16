#include <bits/stdc++.h>
using namespace std;
int char_to_int(char c) {
    if (c == '0')return 0;
    else if (c == '1')return 1;
    else if (c == '2')return 2;
    else if (c == '3')return 3;
    else if (c == '4')return 4;
    else if (c == '5')return 5;
    else if (c == '6')return 6;
    else if (c == '7')return 7;
    else if (c == '8')return 8;
    else if (c == '9')return 9;
}
int p[11][11];
int main() {
	string str;
	while(cin >> str){
		int x = char_to_int(str[0]);
        int y = char_to_int(str[2]);
        int s = char_to_int(str[4]);
        if(s>=1){
        	p[x][y]++;
        	if(x-1>=0)p[x-1][y]++;
        	if(x+1<=9)p[x+1][y]++;
        	if(y-1>=0)p[x][y-1]++;
        	if(y+1<=9)p[x][y+1]++;
        	if(s>=2){
        		if(x-1>=0&&y-1>=0)p[x-1][y-1]++;
        		if(x-1>=0&&y+1<=9)p[x-1][y+1]++;
        		if(x+1<=9&&y-1>=0)p[x+1][y-1]++;
        		if(x+1<=9&&y+1<=9)p[x+1][y+1]++;
        		if(s>=3){
        		 	if(x+2>=0)p[x-2][y]++;
        			if(x+2<=9)p[x+2][y]++;
        			if(y-2>=0)p[x][y-2]++;
        			if(y+2<=9)p[x][y+2]++;
        		}
        	}
        }
	}
	int sum=0,dr=0;
	for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            if (p[i][j] == 0)sum++;
            dr = max(dr, p[i][j]);
        }
    }
    cout<<sum<<endl<<dr<<endl;
	return 0;
}