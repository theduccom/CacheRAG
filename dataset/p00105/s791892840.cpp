#define scanf_s scanf
//#define sscanf_s sscanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 1001
#define _MAX 100
#define HO 6
int main(void)
{
	char str[MAX];
	string word[_MAX];
	int pa[_MAX], rank[_MAX], cou, a;
	for (cou = 0; scanf_s("%s %d", str, &pa[cou]) != EOF;++cou) {
		string wo(str);
		word[cou] = wo;
		rank[cou] = cou;
	}
	for (int i = 0; i < cou; ++i) {
		for (int j = cou - 1; j > i; --j) {
			if (word[rank[j]] <= word[rank[j - 1]]) {
				if (word[rank[j]] == word[rank[j - 1]]) {
					if (pa[rank[j]] < pa[rank[j - 1]]) {
						a = rank[j]; rank[j] = rank[j - 1]; rank[j - 1] = a;
					}
				}
				else {
					a = rank[j]; rank[j] = rank[j - 1]; rank[j - 1] = a;
				}
			}
		}
	}
	for (int i = 0; i < cou; ++i) {
		if(i == 0 || word[rank[i - 1]] != word[rank[i]]) 
		cout << word[rank[i]] << "\n";
		if (i != 0 && word[rank[i - 1]] == word[rank[i]])
			printf(" ");
		printf("%d", pa[rank[i]]);
		if (i != cou - 1 && word[rank[i + 1]] != word[rank[i]])
			printf("\n");
	}
	printf("\n");
}