#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

#define N_MAX 21
#define M_MAX 400
 
int  L[N_MAX][N_MAX];
int  T1[N_MAX], T2[N_MAX];
bool U1[N_MAX], U2[N_MAX];
int  s, g;
int  y, h;

int main( void )
{
  int n, m;
  int a, b, c, d;
  int A[M_MAX], B[M_MAX], C[M_MAX], D[M_MAX];
  string line;

  memset( L, -1, sizeof(L) );
  for ( int i = 0; i < N_MAX; i++ )
  {
    for ( int j = 0; j < N_MAX; j++ )
    {
      L[i][j] = -1;
    }
    T1[i] = T2[i] = 1<<24;
    U1[i] = U2[i] = false;
  }

  cin >> n >> m;
  for ( int i = 0; i < m; i++ )
  {
    cin >> line;
    replace( line.begin(), line.end(), ',', ' ' );
    istringstream is( line );
    is >> a >> b >> c >> d;
    a--;
    b--;
    A[i] = a, B[i] = b, C[i] = c, D[i] = d;
    // cout << a << ", " << b << ", " << c << ", " << d << endl;
  }

/*
  cout << "test1" << endl;
  for ( int i = 0; i < n; i++ )
  {
    cout << T1[i] << ", ";
  }
  cout << endl;
  for ( int i = 0; i < n; i++ )
  {
    cout << T2[i] << ", ";
  }
  cout << endl;
  cout << endl;
*/

  cin >> line;
  replace( line.begin(), line.end(), ',', ' ' );
  istringstream is( line );
  is >> s >> g >> y >> h;
  s--;
  g--;
  // cout << s << ", " << g << ", " << y << ", " << h << endl;
  // cout << s << ", " << g << endl;

  for ( int i = 0; i < m; i++ )
  {
    a = A[i], b = B[i], c = C[i], d = D[i];
    L[a][b] = c, L[b][a] = d;
  }

  for ( int i = 0; i < n; i++ )
  {
    for ( int j = 0; j < n; j++ )
    {
      // cout << L[i][j] << ", ";
    }
    // cout << endl;
  }
  // cout << endl;

  // s -> g
  // cout << s << endl;
  int answer = y - h;
  // cout << answer << endl;
  U1[s] = true;
  T1[s] = 0;
  while ( true )
  {
    for ( int i = 0; i < n; i++ )
    {
      if ( !U1[i] ) continue;
      for ( int j = 0; j < n; j++ )
      {
        if ( U1[j] ) continue;
        if ( L[i][j] == -1 ) continue;
        T1[j] = min( T1[j], T1[i] + L[i][j] );
      }
    }

    int mint = 1<<24;
    int mini = -1;
    for ( int i = 0; i < n; i++ )
    {
      if ( U1[i] ) continue;
      if ( T1[i] < mint )
      {
        mint = T1[i];
        mini = i;
      }
    }
    U1[mini] = true;
    // cout << mini + 1 << endl;

    if ( U1[g] ) break;
    // cout << "test" << endl;
  }
  answer -= T1[g];
  // cout << answer << endl;

  // g -> s
  swap( s, g );
  U2[s] = true;
  T2[s] = 0;
  while ( true )
  {
    for ( int i = 0; i < n; i++ )
    {
      if ( !U2[i] ) continue;
      for ( int j = 0; j < n; j++ )
      {
        if ( U2[j] ) continue;
        if ( L[i][j] == -1 ) continue;
        // cout << i << " -> " << j << ", " << T2[i] << ", " << L[i][j] << ", ";
        // cout << T2[j] << " | ";
        T2[j] = min( T2[j], T2[i] + L[i][j] );
        // cout << T2[j] << endl;
      }
    }

    int mint = 1<<24;
    int mini = -1;
    for ( int i = 0; i < n; i++ )
    {
      if ( U2[i] ) continue;
      if ( T2[i] < mint )
      {
        mint = T2[i];
        mini = i;
      }
    }
    U2[mini] = true;
    // cout << mini + 1 << endl;

    if ( U2[g] ) break;
    // cout << "test" << endl;
  }
  answer -= T2[g];
  cout << answer << endl;

  // cout << answer << endl;
/*
  for ( int i = 0; i < n; i++ )
  {
    cout << T1[i] << ", ";
  }
  cout << endl;
  for ( int i = 0; i < n; i++ )
  {
    cout << T2[i] << ", ";
  }
  cout << endl;
*/

  return 0;
}