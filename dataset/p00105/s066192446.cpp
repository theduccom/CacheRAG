#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

struct WordCount{
  string word;
  vector<int> page;
};

void PushWordCount(const string, const int, vector<WordCount>&);
bool Compare(const WordCount&, const WordCount&);

int main(){
  int Page;
  string Word;
  vector<WordCount> words;

  while(cin >> Word >> Page)
    PushWordCount(Word, Page, words);

  sort(words.begin(), words.end(), Compare);

  for(vector<WordCount>::size_type i=0; i != words.size(); ++i){
    cout << words[i].word << endl;
    sort(words[i].page.begin(), words[i].page.end());

    for(vector<int>::size_type j=0; j < words[i].page.size()-1; ++j)
      cout << words[i].page[j] << " ";
    cout << words[i].page[words[i].page.size()-1] << endl;
  }

  return 0;
}

void PushWordCount(const string Word, const int Page, vector<WordCount>& words){
  int isFound = 0;
  WordCount NewWord;
  vector<WordCount>::iterator iter = words.begin();

  while(iter != words.end()){
    if(iter->word == Word){
      isFound = 1;
      iter->page.push_back(Page);
      break;
    }
    ++iter;
  }
  
  if(isFound == 0){
    NewWord.word = Word;
    NewWord.page.push_back(Page);
    words.push_back(NewWord);
  }
}

bool Compare(const WordCount& x, const WordCount& y){
  return (x.word < y.word);
}