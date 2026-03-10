//+option:-ansi -Wall -Wextra
//+task:hdu 1216
//press <F7> to update the source to mark file.
//press <S-F7> to open the page
#include "vector"
#include "iostream"
#include "algorithm"
#include "cmath"
#include "cstdio"
#include "cstdlib"
#include "cstring"
#include "iterator"
using namespace std;
#define inc(over, ...)\
        do\
        {\
                static int over = 0;\
                (over)++;\
                __VA_ARGS__;\
        }while(0)
#define rangedo(i, s, t)\
        i=s; i!=t; i++
#define range(a, b, ...)\
	__typeof(a) _ = a; (_ != (b)) && (bool(__VA_ARGS__)); _++
#define each(a, b, ...)\
	for(range(a, b, true)) __VA_ARGS__
#define exist(a, b, pred)\
	({\
	        bool ok=false;\
		for(range(a,b,!ok))\
			if((pred)) ok = true;\
		ok;\
	})
#define countdown(a, ...)\
	for(int _ = a; _--; ) __VA_ARGS__
/* Good Day */

#define x_lambda(args, index, ...)({\
		typedef __typeof(args) type, reft;\
		static reft _1, _2;\
		typedef __typeof(({ ({__VA_ARGS__;});})) rett;\
		struct __class{\
		static rett __func1 (const reft &_1){return rett(({__VA_ARGS__;}));}\
		static rett __func2 (const reft &_1, const reft &_2) {return rett(({__VA_ARGS__;}));}}; \
		&__class::__func##index;})
#define $lb (
#define $1(type)  x_lambda $lb type, 1 
#define $2(type)  x_lambda $lb type, 2 
#define $lambda(...) __VA_ARGS__)
#define $cin(type)   istream_iterator<type>(cin)
#define $cin_end(type) istream_iterator<type>()
#define $cout(type) ostream_iterator<type>(cout)
#define $cout_end(type) ostream_iterator<type>()
#define closure static
/* Good Day */

int main()
{
	each(1, 10)
	{
		int __ = _;
		each(1, 10)
		{
			printf("%dx%d=%d\n", __, _, __*_);
		}
	}
}