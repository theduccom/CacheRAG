#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

struct Info{
	Info(){
		num_of_page = 0;
	}

	void insert(int arg_page){
		page[num_of_page++] = arg_page;
	}

	void sort(){
		if(num_of_page > 0){
			for(int i=1; i <= num_of_page-1; i++){
				for(int k=num_of_page-1; k >= i; k--){
					if(page[k] < page[k-1])swap(page[k],page[k-1]);
				}
			}
		}
	}

	void print(){
		printf("%d",page[0]);
		for(int i=1; i < num_of_page; i++)printf(" %d",page[i]);
		printf("\n");

	}

	char word[31];
	int page[100],num_of_page;
};

bool strCmp(char* base, char* comp){
	int length1 = 0,length2 = 0;
	for(int i=0;base[i] != '\0'; i++)length1++;
	for(int i=0;comp[i] != '\0'; i++)length2++;
	if(length1 != length2)return false;

	for(int i=0;base[i] != '\0'; i++){
		if(base[i] != comp[i])return false;
	}
	return true;
}

void strcpy(char* to,char* str){
	for(int i=0;str[i] != '\0';i++){
		to[i] = str[i];
		to[i+1] = '\0';
	}
}

int strCmp2(char* left,char* right){
	int i;

	if(strCmp(left,right))return 3;

	for(i=0;left[i] != '\0' && right[i] != '\0'; i++){
		if(left[i] != right[i]){
			if(left[i] < right[i])return 1;
			else{
				return 2;
			}
		}
	}

	if(left[i] == '\0')return 1;
	else{
		return 2;
	}

}


int main(){

	Info info[100];
	int num_of_info = 0,page;
	bool FLG;

	char buf[31];

	while(scanf("%s %d",buf,&page)!=EOF){
		FLG = false;
		for(int i=0; i < num_of_info; i++){
			if(strCmp(buf,info[i].word)){
				info[i].insert(page);
				FLG = true;
				break;
			}
		}
		if(!FLG){
			strcpy(info[num_of_info].word,buf);
			info[num_of_info].insert(page);
			num_of_info++;
		}
	}

	for(int i=0; i < num_of_info; i++)info[i].sort();

	for(int i=1; i <= num_of_info-1; i++){
		for(int k=num_of_info-1;k >= i; k--){
			if(strCmp2(info[k].word,info[k-1].word) == 1)swap(info[k],info[k-1]);
		}
	}

	for(int i=0; i < num_of_info; i++){
		printf("%s\n",info[i].word);
		info[i].print();
	}


    return 0;
}