#include<iostream>
#include<string>
using namespace std;

int main() {
	int i, j;
	string news;
	while (getline(cin, news)){
		for (i = 0; i <= 25; i++) {
			for (j = 0; j < news.size(); j++){
				if (news[j]>'a' && news[j] <= 'z')news[j] -= 1;
				else if (news[j] == 'a') news[j] = 'z';
			}
			for (j = 0; j < news.size() - 4; j++) {
				if ((news[j] == 't'&&news[j + 1] == 'h') && (news[j + 2] == 'e' || (news[j + 2] == 'i'&&news[j + 3] == 's') || (news[j + 2] == 'a'&&news[j + 3] == 't'))) {
					goto end;
				}
			}
		}
	end:
		cout << news << endl;
	}
}