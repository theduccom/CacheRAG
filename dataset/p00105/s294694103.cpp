#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define SWAP(A, B) {int tmp = (B); (B) = (A); (A) = (tmp);}

int main() {
	char word[100][31];
	int pagenum[100];
	int sortnum[100];
	int count;

	for (int i = 0; i < 100; i++)
		sortnum[i] = i;

	for (count = 0; cin >> word[count] >> pagenum[count] != NULL; count++);

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			if (strcmp(word[sortnum[j]], word[sortnum[j+1]]) > 0)
				SWAP(sortnum[j], sortnum[j+1]);
		}
	}

	for (int i = 0; i < count; i++) {
		if (strcmp(word[sortnum[i]], word[sortnum[i+1]]) == 0) {
			int j, flag = 0;
			for (j = i
				; j < count - 1 && strcmp(word[sortnum[j]], word[sortnum[j+1]]) == 0
				; j++) 
			{
				if (pagenum[sortnum[j]] > pagenum[sortnum[j+1]]) {
					SWAP(sortnum[j], sortnum[j+1]);
					flag = 1;
				}
			}
			if (flag)
				i--;
			else
				i = j;
		}
	}

	for (int i = 0; i < count; i++) {
		cout << word[sortnum[i]] << endl;
		if (strcmp(word[sortnum[i]], word[sortnum[i+1]]) == 0) {
			for (; i < count && strcmp(word[sortnum[i]], word[sortnum[i+1]]) == 0; i++) {
				cout << pagenum[sortnum[i]] << ' ';
			}
		}
		cout << pagenum[sortnum[i]] << endl;
	}
	return 0;
}