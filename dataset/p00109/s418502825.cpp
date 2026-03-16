#include <cstdio>
#include <cctype>
#include <string>

class Parser {
public:
  std::string str;
  int idx;
  Parser (std::string str):str(str),idx(0)
  {
  }
  int evalas();
  int evalmd();
  int evalexpr();
  int evalnum();
};

int Parser::evalas() {
  //  printf("evalas begin: idx=%d\n",idx);

  int left = evalmd(), right;
  while(true) {
    switch(str[idx]) {
    case '+':
      idx++;
      right = evalmd();
      left = left+right;
      break;
    case '-':
      idx++;
      right = evalmd();
      left = left-right;
      break;
    default:
      goto hoge;
    }
  }
 hoge:

  //  printf("evalas end: idx=%d\n",idx);
  return left;
}

int Parser::evalmd() {
//  printf("evalmd begin: idx=%d\n",idx);  

  int left = evalexpr(),right;
  while(true) {
    switch(str[idx]) {
    case '*':
      idx++;
      right = evalexpr();
      left = left*right;
      break;
    case '/':
      idx++;
      right = evalexpr();
      left = left/right;
      break;
    default:
      goto hoge;
    }
  }
 hoge:
  //  printf("evalmd end: idx=%d\n",idx);  
  return left;
}

int Parser::evalexpr() {
  //  printf("evalexpr: idx=%d\n",idx);

  int n;
  if (str[idx] == '(') {
    idx++;
    n = evalas();
    idx++;
  } else {
    n = evalnum();
  }
//  printf("returned: %d\n",n);
  return n;
}

int Parser::evalnum() {
  //  printf("evalnum begin: idx=%d\n",idx);

  int ans=0;
  char ch;
  while (isdigit(ch=str[idx])) {
    idx++;
    ans = ans*10+(int)ch-(int)'0';
  }

  //  printf("evalnum　end: idx=%d\n",idx);
  return ans;
}

int main() {
  int time;
  scanf("%d\n",&time);

  while(time--) {
    char str[100];
    fgets(str,100,stdin);
    //    printf("expr: %s\n",str);
    printf("%d\n",Parser(std::string(str)).evalas());
  }
}