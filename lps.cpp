#include<iostream>
#include<bits/stdc++.h>
char seq[1000];
int lps(int i , int j)
{
	if(i==j)
	{
		return 1;
	}
	if(seq[i]==seq[j]&&(i+1==j))
	{
		return 2;
	}
	if(seq[i]==seq[j])
	{
		return lps(i+1,j-1)+2;
	}
	else
	{
		return max(lps(i,j-1),lps(i+1,j));
	}
}
int main()
{
	char seq[] = "GEEKSFORGEEKS";
	int n = strlen(seq);
	cout<<"The length of the LPS is "<<lps(seq,0,n-1)<<endl;
	return 0;
}
