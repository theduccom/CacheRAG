#include<iostream>
#include<cstdio>
#include<map>
#include<stack>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;
 
int main() {
  int index;
  char word[40] = {};
  char words_list[110][40] = {};
  map < string, int > dic;
  int page_cnt[110] = {};
  int page[110][40] = {};
  int i = 1, k;
  while(scanf("%s %d", word, &index) != EOF) {
    if(dic[word] == 0) {
      dic[word] = i;
      strcpy(words_list[i], word);
      //cout << word << ' ' << index << endl;
      i++;
    }
    int k = dic[word];
    page[k][page_cnt[k]++] = index;
    // page[k].push_back(index);
    // page[dic[word]][page[dic[word]].size()] = index;
    //cout << word << index << endl;
  }

  for(int j = 1; j < i - 1; j++) {
    for(int k = i - 1; k > j; k--) {
      if(strcmp(words_list[j], words_list[k]) > 0) {
        swap(words_list[j], words_list[k]);
	swap(dic[words_list[j]], dic[words_list[k]]);
	swap(page[j], page[k]);
	swap(page_cnt[j], page_cnt[k]);
      }
    }
  }
  
  for(int j = 1; j < i ; j++) {
    sort(page[j], page[j] + page_cnt[j]);
    cout << words_list[j] << endl;
    for(k = 0; k < page_cnt[j] - 1; k++) {
      cout << page[j][k] << ' ';
    }
    cout << page[j][k] << endl;
  }
  
      
  return 0;
}