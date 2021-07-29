#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
int a,t,b;
int count1 = 0;
int main(int argc, char const *argv[])
{	
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        while(a%b == 0)
            {
               count1 +=1;
               a+=1; 
            }
        cout << count1;
    }
}