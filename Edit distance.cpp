#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	string s1,s2;
	cin>>s1>>s2;
	int dp[1+s1.size()][1+s2.size()];
	for(int i=0;i<=s1.size();i++)
	{
	    for(int j=0;j<=s2.size();j++)
	    dp[i][j]=0;
	}
	for(int i=0;i<=s1.size();i++)
	{
	    for(int j=0;j<=s2.size();j++)
	    {
	        if(i==0)
	        dp[i][j]=j;
	        else if(j==0)
	        dp[i][j]=i;
	        else if(s1[i-1]==s2[j-1])
	        dp[i][j]=dp[i-1][j-1];
	        else
	        dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
	    }
	}cout<<dp[s1.size()][s2.size()];
	return 0;
}
