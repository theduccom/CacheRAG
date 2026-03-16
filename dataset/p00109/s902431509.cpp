//???2:negFLG?°???\???
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

int main(){

	int n,tmp,op1,work,count,work2;
	char line[101],calc;
	stack<int> NUM,work_num;
	stack<char> OP,work_op;

	bool numFLG,negFLG;

	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		scanf("%s",line);

		tmp = 0;
		numFLG = false;
		negFLG = false;

		for(int k = 0; line[k] != '\0'; k++){
			if(line[k] >= '0' && line[k] <= '9'){
				numFLG = true;
				tmp = 10*tmp + (line[k] - '0');

			}else{

				if(numFLG == true){

					if(negFLG){
						tmp = -1*tmp;
						negFLG = false;
					}

					if(OP.empty() == false && (OP.top() == '*' || OP.top() == '/')){
						calc = OP.top();
						OP.pop();
						op1 = NUM.top();
						NUM.pop();

						if(calc == '*'){
							NUM.push(tmp*op1);
						}else{
							NUM.push(op1/tmp);
						}
					}else{
						NUM.push(tmp);
					}

					numFLG = false;
					tmp = 0;
				}

				if(line[k] == '+' ||line[k] == '*' || line[k] == '/' || line[k] == '('){
					OP.push(line[k]);
				}else if(line[k] == '-'){

					if(k == 0){
						if(line[k+1] != '('){
							negFLG = true;
						}else{
							NUM.push(-1);
							OP.push('*');
						}
					}else if(line[k-1] == '(' && line[k+1] == '('){
						NUM.push(-1);
						OP.push('*');
					}else if(k > 0 && (line[k-1] == '+' || line[k-1] == '-' || line[k-1] == '*' || line[k-1] == '/' || line[k-1] == '(')){
						negFLG = true;
					}else{
						OP.push('-');
					}
				}else if(line[k] == ')'){

					work = NUM.top();
					NUM.pop();
					work_num.push(work);

					count = 0;

					while(true){
						calc = OP.top();
						OP.pop();
						if(calc == '(')break;

						count++;

						work_op.push(calc);

						work = NUM.top();
						NUM.pop();
						work_num.push(work);
					}

					if(count == 0){
						work = work_num.top();
						work_num.pop();
					}else{

						work = work_num.top();
						work_num.pop();

						while(!work_num.empty()){
							calc = work_op.top();
							work_op.pop();

							if(calc == '+'){
								work += work_num.top();
							}else if(calc == '-'){
								work -= work_num.top();
							}else if(calc == '*'){
								work *= work_num.top();
							}else{
								work /= work_num.top();
							}
							work_num.pop();
						}
					}

					if(OP.empty() == false && OP.top() == '*'){
						OP.pop();
						work2 = NUM.top();
						NUM.pop();
						work *= work2;
					}else if(OP.empty() == false &&OP.top() == '/'){
						OP.pop();
						work2 = NUM.top();
						NUM.pop();
						work = work2/work;
					}

					NUM.push(work);

				}else{

					work = NUM.top();
					NUM.pop();
					work_num.push(work);

					while(!NUM.empty()){
						calc = OP.top();
						OP.pop();

						work_op.push(calc);

						work = NUM.top();
						NUM.pop();
						work_num.push(work);
					}

					work = work_num.top();
					work_num.pop();

					while(!work_num.empty()){
						calc = work_op.top();
						work_op.pop();

						if(calc == '+'){
							work += work_num.top();
						}else if(calc == '-'){
							work -= work_num.top();
						}else if(calc == '*'){
							work *= work_num.top();
						}else{
							work /= work_num.top();
						}
						work_num.pop();
					}

					printf("%d\n",work);
				}
			}
		}

	}


	return 0;
}