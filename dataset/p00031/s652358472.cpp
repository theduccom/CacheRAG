#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

class STACK{

public:
	STACK(){
		index = 0;
	}
	void push(int data){
		array[index++] = data;
	}
	int pop(){
		index--;
		return array[index];
	}
	bool isEmpty(){
		return index == 0;
	}
	int getIndex(){
		return index;
	}

private:
	int array[10];
	int index;
};

int main(){
	int w;
	STACK stack;

	while(scanf("%d",&w) != EOF){
		for(int i = 512; i>= 1; i /= 2){
			if(w>=i){
				stack.push(i);
				w -= i;
			}
		}

		while(!stack.isEmpty()){
				if(stack.getIndex() == 1){
					printf("%d\n",stack.pop());
				}else{
					printf("%d ",stack.pop());
				}
		}
	}

	return 0;
}