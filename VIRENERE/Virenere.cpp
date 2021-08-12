/*
	Name: Virenere Algorithms
	Copyright: Dang Ngoc Thuan
	Author: Dang Ngoc Thuan
	Date: 09/08/21 17:32
	Description: This is my idea
*/

#include<iostream>
using namespace std;


	int ChangeToNumber(char c)
	{
		if(c >='A' && c<='Z')
		{
				return c-'A';
		}
		else if ('a'<=c && c<='z')
		{
				return c-'a';
		}
	
	}
	char ChangeToChar(int n)
	{
			return 'A'+n;		
	}
int main()
{
	
	string P,K,C;
	cout<<"P:";
	fflush(stdin);
	getline(cin,P);
	C=P;
	cout<<"K:";
	fflush(stdin);
	getline(cin,K);
	
	int psize=P.size();
	int m=K.size();
	//Ma Hoa
	for(int i=0;i<psize;i++)
	{
		
    	int	index=ChangeToNumber(K[i%m])+ChangeToNumber(P[i]);

		if(index>25)
		{
			index=index%26;
		}
			C[i]=ChangeToChar(index);
	}
	cout<<C<<endl;
	//khoi phuc
		for(int i=0;i<psize;i++)
	{
		
    	int	index=ChangeToNumber(P[i])-ChangeToNumber(K[i%m]);

		if(index<0)
		{
			index=(index+26)%26;

		}
			P[i]=ChangeToChar(index);
	}
	cout<<P;
	return 0;
}
