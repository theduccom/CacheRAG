#include<stdio.h>
#include<queue>
#include<bitset>
using namespace std;

const int N = 8;
const int SHIFT_BITS = 3;

unsigned Swap3Bits(unsigned x, int b1, int b2)
{
	unsigned a,b,s;
	b1 *= SHIFT_BITS;
	b2 *= SHIFT_BITS;
	a = (x& (07<<b1));
	b = (x& (07<<b2));
	s = (a>>b1<<b2) | (b>>b2<<b1);
	return (x&~a&~b)|s;
}

int Ans(int initField)
{
	int ans, i;
	unsigned field;
	static bitset<16777216> bitHis;
	queue<unsigned> q;
	unsigned int NEXT_COUNT = 0xffffffff;

	ans = 0;
	bitHis.reset();
	q.push(initField);
	q.push(NEXT_COUNT);
	for(;;)
	{
		field = q.front();
		q.pop();
		if(field == NEXT_COUNT)
		{
			++ans;
			q.push(NEXT_COUNT);
			continue;
		}
		if(bitHis[field])
			continue;
		if(field == 001234567)
			break;
		bitHis[field] = true;

		int zi = 0;
		for(i = 0; i < N; ++i)
		{
			if( (field & (07<<i*SHIFT_BITS)) == 00)
			{
				zi = i;
				break;
			}
		}
		
		q.push( Swap3Bits(field, zi, (zi<4?zi+4:zi-4)) );
		if((zi&0x3) != 0x3)
			q.push( Swap3Bits(field, zi, zi+1) );
		if((zi&0x3) != 0x0)
			q.push( Swap3Bits(field, zi,zi-1) );
	}
	return ans;
}

int main(void)
{
	int a[N], i;

	for(;;)
	{
		unsigned field = 0;
		for(i = 0; i < N; ++i)
		{
			if(scanf("%d",&a[i])!=1) return 0;
			field |= (a[i] << ( (N-i-1)*SHIFT_BITS) );
		}
		printf("%d\n",Ans(field));
	}
	return 1;
}