#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#ifdef __GXX_EXPERIMENTAL_CXX0X__
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#ifdef __GXX_EXPERIMENTAL_CXX0X__
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

#include <array>

using namespace std;
int a[5] = {};

bool for_card ()
{
	array<int , 14> d{};
	for( size_t i = 0; i < 5; i++ )
	{
		d[a[i]]++;
	}
	sort ( d.rbegin () , d.rend () );
	return d[0] == 4;
}

bool fullhouse ()
{
	array<int , 14> d{};
	for( size_t i = 0; i < 5; i++ )
	{
		d[a[i]]++;
	}
	sort ( d.rbegin () , d.rend () );
	return d[0] == 3 && d[1] == 2;
}

bool straight ()
{
	array<int , 14> d{};
	for( size_t i = 0; i < 5; i++ )
	{
		d[a[i]]++;
		if( d[a[i]] > 1 )return 0;
	}
	int k = 0;
	while( d[k] == 0 )k++;
	if( d[1] && d[10] && d[11] && d[12] && d[13] )return 1;
	for( int i = k; i < k + 5; i++ )
	{
		if( d[i] == 0 )return 0;
	}
	return 1;
}

bool there_card ()
{
	array<int , 14> d{};
	for( size_t i = 0; i < 5; i++ )
	{
		d[a[i]]++;
	}
	sort ( d.rbegin () , d.rend () );
	return d[0] == 3;
}

bool two_pair ()
{
	array<int , 14> d{};
	for( size_t i = 0; i < 5; i++ )
	{
		d[a[i]]++;
	}
	sort ( d.rbegin () , d.rend () );
	return d[0] == 2 && d[1] == 2;
}

bool one_pair ()
{
	array<int , 14> d{};
	for( size_t i = 0; i < 5; i++ )
	{
		d[a[i]]++;
	}
	sort ( d.rbegin () , d.rend () );
	return d[0] == 2;
}



int main ()
{
	char x;
	while( cin >> a[0] >> x >> a[1] >> x >> a[2] >> x >> a[3] >> x >> a[4] )
	{
		if( for_card () )
		{
			cout << "four card" << endl;
		} else if( fullhouse () )
		{
			cout << "full house" << endl;
		} else if( straight () )
		{
			cout << "straight" << endl;
		} else if( there_card () )
		{
			cout << "three card" << endl;
		} else if( two_pair () )
		{
			cout << "two pair" << endl;
		} else if( one_pair () )
		{
			cout << "one pair" << endl;
		} else
		{
			cout << "null" << endl;
		}
	}
}