#include<cstdio>
#include<cstring>

char ab(char c){
	if(c == 'z'){
		return 'a';
	}
	if(c == ' ' || c == '.' || c == '\n'){
		return c;
	}
	return c + 1;
}

char ba(char c){
	if(c == 'a'){
		return 'z';
	}
	if(c == ' '|| c == '.' || c == '\n'){
		return c;
	}
	return c - 1;
}

int main(){
	char s[82];
	char *f;
	char c;
	int sh, a;

	while(scanf("%c", &s[0]) + 1){
		char th[3][5] = {"the", "this", "that"};

		a = 0;
		while(s[a] - 10){
			a++;
			scanf("%c", &s[a]);
		}
	
		a++;
		s[a] = '\0';
		f = 0;
		for(int i = 0; i < 26; i++){
			f = 0;
			for(int j = 0; j < 3; j++){
				f = strstr(s, th[j]);
				if(f){
					j += 3;
					sh = i;
					i += 26;
				}
			}

			for(int j = 0; j < 3; j++){
				int t = 0;
				while(th[j][t]){
					th[j][t] = ab(th[j][t]);
					t++;
				}
			}
		}

		a = 0;
		while(s[a]){
			char shc = s[a];
			for(int i = 0; i < sh; i++){
				shc = ba(shc);
			}
			printf("%c", shc);
			a++;
		}
	}
}