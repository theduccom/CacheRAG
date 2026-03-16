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

int data[10][11] = {};

int main ()
{
	int a , b , c;
	char d;
	while( cin >> b >> d >> a >> d >> c )
	{
		if( c == 1 )
		{
			if( a - 1 >= 0 )
			{
				data[a - 1][b]++;
				data[a - 1][b + 1]--;
			}
			data[a][max ( b - 1 , 0 )]++;
			data[a][min ( b + 2 , 10 )]--;
			if( a + 1 < 10 )
			{
				data[a + 1][b]++;
				data[a + 1][b + 1]--;
			}
		} else if( c == 2 )
		{
			if( a - 1 >= 0 )
			{
				data[a - 1][max ( b - 1 , 0 )]++;
				data[a - 1][min ( b + 2 , 10 )]--;
			}
			data[a][max ( b - 1 , 0 )]++;
			data[a][min ( b + 2 , 10 )]--;
			if( a + 1 < 10 )
			{
				data[a + 1][max ( b - 1 , 0 )]++;
				data[a + 1][min ( b + 2 , 10 )]--;
			}
		} else
		{
			if( a - 2 >= 0 )
			{
				data[a - 2][b]++;
				data[a - 2][b + 1]--;
			}
			if( a - 1 >= 0 )
			{
				data[a - 1][max ( b - 1 , 0 )]++;
				data[a - 1][min ( b + 2 , 10 )]--;
			}
			data[a][max ( b - 2 , 0 )]++;
			data[a][min ( b + 3 , 10 )]--;
			if( a + 1 < 10 )
			{
				data[a + 1][max ( b - 1 , 0 )]++;
				data[a + 1][min ( b + 2 , 10 )]--;
			}
			if( a + 2 < 10 )
			{
				data[a + 2][b]++;
				data[a + 2][b + 1]--;
			}
		}
	}
	int ans1 = 0 , ans2 = 0;
	for( size_t i = 0; i < 10; i++ )
	{
		for( size_t j = 1; j < 11; j++ )
		{
			data[i][j] += data[i][j - 1];
		}
	}
	for( size_t i = 0; i < 10; i++ )
	{
		for( size_t j = 0; j < 10; j++ )
		{
			if( data[i][j] == 0 )
			{
				ans1++;
			}
			if( ans2 < data[i][j] )
			{
				ans2 = data[i][j];
			}

		}
	}
	cout << ans1 << endl << ans2 << endl;
}