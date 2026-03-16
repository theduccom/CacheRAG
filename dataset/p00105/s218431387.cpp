#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

typedef struct{
	std::string word;
	std::vector<int> page;
}Index;

bool operator<(const Index& x, const Index& y) { return x.word < y.word ;}


int main(void){
	int i, page;
	std::string word;

	std::vector<Index> Books;

	int NoW = 0;
	while(std::cin >> word >> page){
		for(i=0;i<NoW;i++){
			if(Books[i].word==word){
				Books[i].page.insert(Books[i].page.end(), page);
				break;
			}
		}
		if(i==NoW){
			Index temp;
			temp.word = word;
			temp.page.insert(temp.page.begin(), page);
			Books.insert(Books.end(), temp);
			NoW++;
		}
	}
	
	std::sort(Books.begin(), Books.end());

	for(unsigned int i=0;i<Books.size();i++){
		std::sort(Books[i].page.begin(), Books[i].page.end());
	}

	for(unsigned int i=0;i<Books.size();i++){
		std::cout << Books[i].word << std::endl;
		for(unsigned int j=0;j<Books[i].page.size();j++){
			std::cout << Books[i].page[j];
			if(j!=Books[i].page.size()-1){
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}

	return 0;
}

