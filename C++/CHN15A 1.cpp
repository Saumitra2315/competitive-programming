#include <iostream>
#include <string>
#include<vector>
using namespace std;
int T,N,K,M = 0;
int main(int argc, char const *argv[])
{
	cin >> T;
	for (int i = 0 ; i < T; ++i)
	{
		cin >> N >> K;
		int minions[N];
		for (int j = 0; i < N; ++j)
		{
			cin >> minions[j];
		}
		for (int a = 0; a < N; ++a)
		{
			if ((minions[a]+K)% 7 == 0)
				{
					M += 1;
				}	
		}
		cout << M;
	}
}