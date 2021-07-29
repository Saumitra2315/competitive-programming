#include <iostream>
#include <string>
#include<vector>
using namespace std;
int t,n,k,m; 
string str;
int count = 0;
std::vector<int> v;
int main(int argc, char const *argv[])
{	
	cin >> str;
	m = str.length();
	for (int i = 0; i < m; ++i)
	{
		for (int j = i+1; j < m-i  ; ++j)
		{
			if(str[i]== str[j])
			{
				count+=1;
			}
		}
	}
	cout << count;
}