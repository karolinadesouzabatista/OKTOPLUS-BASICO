#include <iostream>

using namespace std;

int main() {
	
  int A = 1, M = 1, N, V, i, n, a;

  cin >> N;

  for ( i = 0; i < N; i++)
  {
    cin >> n;
    if (i > 0) 
    {
      if(a == n)  A++;
      if(a != n || i == N - 1)
      {
        if(A > M) M = A;
        
        A = 1;

      }
    }
       a = n;
  }

    cout << M << " " <<endl;

	
	return 0;
}
