#include <iostream>
#include <vector>
#include <math.h>

int sample;
std::vector<int> weight;
std::vector<int> answer;

void dfs(int i, std::vector<int> choice){
	int sum = 0;
	for(unsigned int j=0; j<choice.size(); j++){
		sum += choice[j];
	}
	if(sum==sample) { answer = choice; }
	if(i>9 || sum > sample) return;

	dfs(i+1, choice);
	choice.insert(choice.end(), weight[i]);
	dfs(i+1, choice);
}

int main(void){
	int i;
	for(i=0;i<10;i++){
		weight.insert(weight.end(), (int)pow(2.0, i));
	}
	while( (std::cin >> sample)!=NULL ){
		answer.clear();
		dfs(0,answer);
		for(unsigned int i=0; i<answer.size(); i++){
			std::cout << answer[i];
			if(i==answer.size()-1) { break; }
			else { std::cout << " "; }
		}
		std::cout << std::endl;
	}
	return 0;
}

