#include <iostream>
#include <string>
#include<vector>
using namespace std;
int t,n,k,m; 
string str;
int X = 0;

int main(int argc, char const *argv[])
{	
	cin >>t;
	while(t--)
	{
		cin >> str;
		if (str[1] == '+')
		{
			++X;
		}
		else
		{
			--X;
		}
	} cout << X;
}