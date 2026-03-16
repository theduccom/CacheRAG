#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

int main() {
	char s[100] = {};
	while (fgets(s,sizeof(s),stdin)) {
		int start = 0, ofs=0,ofs2,chk=1;
		int buf;
		for (int i = 0; s[i] != '\n'; i++) {
			if (s[i] == ' ' || s[i] == '.') {
				if (i - start == 3) {
					chk = 1;
					ofs2 = (int)'t' - (int)(s[start]);
					for (int j = 1; j < 3; j++) {
						buf = (int)s[start + j] + ofs2;
						if (buf > (int)'z')
							buf -= 26;
						if (buf < (int)'a')
							buf += 26;
						if (j == 1 && buf != (int)'h') {
							chk = 0;
							break;
						}
						if (j == 2 && buf != (int)'e')
							chk = 0;
					}
					if (chk == 1) {
						ofs = ofs2;
						break;
					}
				}
				if (i - start == 4){
					chk = 1	;
					ofs2 = (int)'t' - (int)s[start];
					for (int j = 1; j < 4; j++) {
						buf = (int)s[start + j] + ofs2;
						if (buf > (int)'z')
							buf -= 26;
						if (buf < (int)'a')
							buf += 26;
						if (j == 1 && buf != (int)'h') {
							chk = 0;
							break;
						}
						if (j == 2 && buf == (int)'a')
							chk = 2;
						if (j == 2 && buf == (int)'i')
							chk = 3;
						if (j == 2 && buf != (int)'i'&&buf != (int)'a') {
							chk = 0;
							break;
						}
						if (j == 3 && chk == 2) {
							if (buf == (int)'t')
								chk = 1;
							else {
								chk = 0;
								break;
							}
						}
						if (j == 3 && chk == 3) {
							if (buf == (int)'s')
								chk = 1;
							else {
								chk = 0;
								break;
							}
						}
					}
					if (chk == 1) {
						ofs = ofs2;
						break;
					}
				}
				start = i + 1;
			}
		}
		for (int i = 0; s[i] != '\n'; i++) {
			int buf;
			if (s[i] != ' '&& s[i]!='.') {
				buf = (int)s[i] + (int)ofs;
				if (buf > (int)'z')
					buf -= 26;
				if (buf < (int)'a')
					buf += 26;
				s[i]=(char)buf;
			}
		}
		cout << s;
	}
	return 0;
}

