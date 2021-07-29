#include <iostream>
#include <string>
#include<vector>
using namespace std;
int t,n,k,m; 
string str;
int count = 0;
int main(int argc, char const *argv[])
{	
	cin >>t;
	while(t--)
	{
		cin >> k;
		cin >> str;
		for (int i = 0; i < k; ++i)
		{
			for (int j = k-i; j < k; ++i)
			{
				if(str[i] == str[j] && j-i > 0) 
				{
					count += 1;
				}
				
			}
		
		}
		if (count > 0)
		{
			cout << "No";
		}
		else
		{
			cout << "Yes";
		}
	} 
}