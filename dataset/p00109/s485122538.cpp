#include <iostream>

using namespace std;
/*
digit : 0-9
number : (digit)+
block :("("expression")"|number)
term : block(("*"|"/")block)*
expression : term(("+"|"-")term)*
*/

int getExpression(char* exp,int &it);

bool isDigit(char *exp,int it)
{
    return '0' <= exp[it] && exp[it] <= '9';
}

int getDigit(char *exp,int &it)
{
    it++;
    return (int)(exp[it-1]-'0');
}

int getNumber(char *exp,int &it)
{
    int r=0;
    while(isDigit(exp,it))
    {
	r*=10;
	r+=getDigit(exp,it);
    }
    return r;
}

int getBlock(char *exp,int &it)
{
    int r;
    if (exp[it] == '(')
    {
	it++;
	r = getExpression(exp,it);
	it++;
	return r;
    }
    return getNumber(exp,it);
}

int getTerm(char *exp,int &it)
{
    int r=getBlock(exp,it);
    while(exp[it] == '*' || exp[it] == '/')
    {
	if (exp[it] == '*') {
	    it++;
	    r*=getBlock(exp,it);
	} else {
	    it++;
	    r/=getBlock(exp,it);
	}
    }
    return r;
}

int getExpression(char *exp,int &it)
{
    int r=getTerm(exp,it);
    while (exp[it] == '+' || exp[it] == '-')
    {
	if (exp[it] == '+')
	{
	    it++;
	    r+=getTerm(exp,it);
	} else {
	    it++;
	    r-=getTerm(exp,it);
	}
    }
    return r;
}


int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
	int it=0;
	char input[101] = "";
	scanf("%s", input);
	printf("%d\n", getExpression(input,it));
    }
    return 0;
}