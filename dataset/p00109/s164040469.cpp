#include<string>
#include<stack>
#include<cstdlib>
#include<iostream>
using namespace std;

const int obracket	=-1;
const int sum		=0;
const int diff		=1;
const int multi		=2;
const int divide	=3;

stack<double> operands;
stack<int> operators;

int evaluate(string& expression);
int calc(int a,int b,int op);

int main()
{
	string str;
	int i,n;

	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>str;
		cout<<evaluate(str)<<endl;
	}
	return 0;
}

int evaluate(string& expression)
{
	int i,n,numstart;
	bool innum=false;
	int a,b;
	char temp;

	while(!operands.empty())operands.pop();
	while(!operators.empty())operators.pop();

	for(i=0;expression[i]!='=';i++)
	{
		temp=expression[i];
		if(isdigit(temp)||temp=='.')
		{
			if(!innum)
			{
				innum=true;
				numstart=i;
			}
		}
		else
		{
			if(innum)
			{
				innum=false;
				operands.push(atof(expression.substr(numstart,i-numstart).c_str()));
			}
			switch(temp)
			{
				case '(':
					operators.push(obracket);
					break;
				case ')':
					while(operators.top()!=obracket)
					{
						b=operands.top();
						operands.pop();
						a=operands.top();
						operands.pop();
						operands.push(calc(a,b,operators.top()));
						operators.pop();
					}
					operators.pop();
					break;
				case '+':
					while(!operators.empty() && operators.top()!=obracket)
					{
						b=operands.top();
						operands.pop();
						a=operands.top();
						operands.pop();
						operands.push(calc(a,b,operators.top()));
						operators.pop();
					}
					operators.push(sum);
					break;
				case '-':
					if(i==0||expression.at(i-1)=='(')
					{
						operands.push(0);
					}
					else
					{
						while(!operators.empty() && operators.top()!=obracket)
						{
							b=operands.top();
							operands.pop();
							a=operands.top();
							operands.pop();
							operands.push(calc(a,b,operators.top()));
							operators.pop();
						}
					}
					operators.push(diff);
					break;
				case '*':
					while(!operators.empty() && operators.top()>=multi)
					{
						b=operands.top();
						operands.pop();
						a=operands.top();
						operands.pop();
						operands.push(calc(a,b,operators.top()));
						operators.pop();
					}
					operators.push(multi);
					break;
				case '/':
					while(!operators.empty() && operators.top()>=multi)
					{
						b=operands.top();
						operands.pop();
						a=operands.top();
						operands.pop();
						operands.push(calc(a,b,operators.top()));
						operators.pop();
					}
					operators.push(divide);
					break;
			}
		}
	}
	if(innum)operands.push(atof(expression.substr(numstart,i-numstart).c_str()));
	while(!operators.empty())
	{
		b=operands.top();
		operands.pop();
		a=operands.top();
		operands.pop();
		operands.push(calc(a,b,operators.top()));
		operators.pop();
	}
	return operands.top();
}

int calc(int a,int b,int op)
{
	switch(op)
	{
		case sum:
			return a+b;
			break;
		case diff:
			return a-b;
			break;
		case multi:
			return a*b;
			break;
		case divide:
			return a/b;
			break;
		default:
			return 0;
			break;
	}
}