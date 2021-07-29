#include <iostream>
#include <string>
#include<vector>
using namespace std;
int T,N,C;
int main(int argc, char const *argv[])
{
	cin >> T;
	for (int i = 0 ; i < T; ++i)
	{
		cin >> N >> C;
		for (int j = 0; j < N; ++j)
		{
			int A;
			cin >> A;
			C = C-A;
		}
		if (C<0)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		
		}
	}
}