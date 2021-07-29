#include <iostream>
#include <string>
#include<vector>
using namespace std;
int t,n,k,m; 
string str;
int count = 0;
int main(int argc, char const *argv[])
{	
	cin >> t >> n;
	while(t <= n)
	{
		t *= 3;
		n *= 2;
		count += 1;
	}
	cout << count  << endl;
}