#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

typedef enum{
	INT,
	PLUS,
	MINUS,
	MUL,
	DIV,
	EQ,
	LPAREN,
	RPAREN,
	NL
} token_kind_t;

typedef struct token{
	int c;
	token_kind_t kind;
	int ival;
} *token_t;

int calc_expr_add(token_t t);

token_t next_tok(token_t t)
{
	while (t->c == ' ' || t->c == '\n') {
		t->c = getchar();
	}
	if (isdigit(t->c)){
		t->ival = 0;
		t->kind = INT;
		while (isdigit(t->c)){
			t->ival *= 10;
			t->ival += t->c - '0';
			t->c = getchar();
		}
	}
	else{
		if (t->c == '+') t->kind = PLUS;
		else if (t->c == '-') t->kind = MINUS;
		else if (t->c == '*') t->kind = MUL;
		else if (t->c == '/') t->kind = DIV;
		else if (t->c == '(') t->kind = LPAREN;
		else if (t->c == ')') t->kind = RPAREN;
		else if (t->c == '=') t->kind = EQ;
		else if (t->c == '\n') t->kind = NL;
		else exit(1);

		t->c = getchar();
	}

	return t;
}

token_t mk_tok()
{
	token_t t;
	if ((t = (token_t)malloc(sizeof(struct token))) == NULL){
		perror("malloc");
		exit(1);
	}

	t->c = getchar();

	return t;
}

int calc_expr_un(token_t t)
{
	int ret = 0;
	if (t->kind == INT){
		ret = t->ival;
		next_tok(t);
	}
	else if (t->kind == LPAREN){
		next_tok(t);
		ret = calc_expr_add(t);
		if (t->kind != RPAREN) exit(1);
		next_tok(t);
	}
	else if (t->kind == PLUS || t->kind == MINUS){
		if (t->kind == PLUS){
			next_tok(t);
			ret += calc_expr_un(t);
		}
		else {
			next_tok(t);
			ret -= calc_expr_un(t);
		}
	}
	else exit(1);
	return ret;
}

int calc_expr_mul(token_t t)
{
	int ret = 0;
	ret = calc_expr_un(t);
	while (t->kind == MUL || t->kind == DIV){
		if (t->kind == MUL){
			next_tok(t);
			ret *= calc_expr_un(t);
		}
		else {
			next_tok(t);
			ret /= calc_expr_un(t);
		}
	}
	return ret;
}

int calc_expr_add(token_t t)
{
	int ret = 0;
	ret = calc_expr_mul(t);
	while (t->kind == PLUS || t->kind == MINUS){
		if (t->kind == PLUS){
			next_tok(t);
			ret += calc_expr_mul(t);
		}
		else {
			next_tok(t);
			ret -= calc_expr_mul(t);
		}
	}
	return ret;
}

int calc_expr(token_t t)
{
	int ret = 0;

	next_tok(t);
	ret = calc_expr_add(t);
	if (t->kind != EQ) exit(1);

	return ret;
}

int main()
{
	int i, n;

	n = 0;
	while (isdigit(i = getchar())){
		n *= 10;
		n += i - '0';
	}

	token_t t = mk_tok();

	for (i = 0; i < n; i++){
		int result = calc_expr(t);
		printf("%d\n", result);
	}

	return 0;
}