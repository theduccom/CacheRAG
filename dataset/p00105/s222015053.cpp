#include <stdio.h>
#include <iostream>
#include <list>
#include <map>
#include <stdlib.h>

using namespace std;

int main(void)
{
	list<string> strList;
	map<string, list<int> > pages;
	char buf[256];
	char word[256];
	int i;
	
	while (fgets(buf, 256, stdin) != NULL){
		for (i = 0; buf[i] != ' '; i++){
			word[i] = buf[i];
		}
		word[i] = '\0';
		i++;
		strList.push_back(word);
		pages[strList.back()].push_back(atoi(&buf[i]));
	}
	
	strList.sort();
	strList.unique();
	list<string>::iterator it;
	for (it = strList.begin(); it != strList.end(); it++){
		pages[*it].sort();
		list<int>::iterator itt;
		printf("%s\n", it->c_str());
		itt = pages[*it].begin();
		printf("%d", *itt);
		itt++;
		for (; itt != pages[*it].end(); itt++){
			printf(" %d", *itt);
		}
		cout << endl;
	}
	
	return (0);
}