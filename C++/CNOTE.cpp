#include <iostream>
#include <string>
using namespace std;
int T,X,Y,K,N,a;
int main(int argc, char const *argv[])
{
	cin >> T;
	for (int i = 0 ; i < T; ++i)
	{
		cin >> X >> Y >> K >> N;
		while(N--)
		{
			cin << P << K;
			if (X-Y<= P && K>=C )
			{
				cout << "LuckyChef" << endl;
			}
			else
			{
				cout << "UnluckyChef" << endl ;
			}
		}
	}
}