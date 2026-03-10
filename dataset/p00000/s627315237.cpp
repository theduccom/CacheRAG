#include <iostream>
#include <assert.h>
#include <list>
#include <algorithm>
#include <vector>
#include <cmath>

void ff( std::list< std::vector< std::string > > & c )
{
    // ??¢???
    std::for_each( c.begin(), c.end(),
        []( std::vector< std::string> & elem )
        { }
    ) ;

    // ?°????
    std::for_each( c.begin(), c.end(),
        []( auto & elem )
        {  }
    ) ;
}

template < typename Printer >
void f( Printer && p )
{
    p( 123 ) ;
    p( 1.23 ) ;
    p( "123" ) ;
}


void operator delete( void *, std::size_t ) noexcept ;
void operator delete[]( void *, std::size_t ) noexcept ;

template < typename T >
constexpr T sqrt( T s )
{
    T x = s / 2.0 ; // ??????????????????
    T prev = 0.0 ;

    while ( x != prev )
    { // ???????????????????????????????????§????????????2?????°?????????
        prev = x ;
        x = (x + s / x ) / 2.0 ; // ????????????2
    }
    return x ;
}


// 1927426???1927428???WA???????????????????????????????????§???
auto dodo() {

  assert(std::abs(sqrt(2.0) - std::sqrt(2)) < 1e-9);

    f( []( auto && elem ){ assert(1 && elem) ; } ) ;
  auto x = 0b101;
  assert(x == 5);
  auto k = 1.2'3'4'5'6'789;
  assert(![ x = 0 ](){ return x ; }()) ;

  auto f = []( auto x ) { return x ; } ;

  f( 0 ) ;
  f( 0.0 ) ;
  f( 'A' ) ;
  f( "hello" ) ;

  int i = 10;
  decltype(auto) a = i ;



  assert(1.23456789==k);
  for(auto i=0; i<9; i++)
    for(auto j=0; j<9; j++)
      std::cout << i+1 << 'x' << j+1 << '=' << (i+1)*(j+1) << std::endl;
}

int main() {
  dodo();
  return 0;
}