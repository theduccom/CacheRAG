#include <iostream>
int main(){
	while(1){
		std::string s[8];

		int x = 0,y = 0;
		for(int i=0;i<8;i++){
			std::cin >> s[i];
			if(std::cin.eof())return 0;
		}
		
		for(int i=0;i<64;i++)
			if(s[i/8][i%8] == '1'){x=i%8,y=i/8;break;}

		char res;
		if(y+1 < 8 && s[y+1][x] == '1'){
			if(x-1 >= 0 && s[y+1][x-1] == '1'){
				if(x+1 < 8 && s[y][x+1] == '1'){
					res = 'G';
				}
				else{
					res = 'D';
				}
			}
			else if(x+1 < 8 && s[y+1][x+1] == '1'){
				if(s[y][x+1] == '1'){
					res = 'A';
				}
				else{
					res = 'F';
				}
			}
			else{
				res = 'B';
			}
		}
		else{
			if(x+1 < 8 && y+1 < 8 && s[y+1][x+1] == '1'){
				res = 'E';
			}
			else{
			res = 'C';
			}
		}

		std::cout << res << std::endl;
	}
}