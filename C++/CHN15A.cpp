#include <iostream>
#include <string>
#include<vector>
using namespace std;
int T,N,K,M,A = 0;
int count = 0;
int main(int argc, char const *argv[])
{
	cin >> T;
	while(T--)
	{
		cin >> N >> K;
		for (int i = 0; i < N; ++i)
		{
			cin >> M;

			if ((M+K) % 7 == 0)
			{
				count += 1;
			}
		}
		cout << count;

	}
}