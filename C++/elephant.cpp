#include <iostream>
#include <string>
#include<vector>
using namespace std;
int t,n,k,m,w;
string str;
int count = 0;
int main(int argc, char const *argv[])
{	
	cin >> t;
	k = t%5;
	n = (int)(t/5);
	if(t != 0 && k != 0)
	{
		count =  n + 1;
		cout << count;
	}
	else
	{
		cout << n;
	}
	 
}