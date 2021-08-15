/*
	Name: 
	Author: Dang Ngoc Thuan
	Date: 08/08/21 10:31
	Description: This is a program to execute CAESAR algorithm when I have learn Sercurity Information, let get check it!
	***********************************************CEASAR*********************************************************************
*/

#include<iostream>
#include<string>
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
//	Declare variable
	string P,C;
	int K;

//	Type a string input and key K
	cout<<"Type a Ciphertext input : ";
	fflush(stdin);
	getline(cin,P);
	C=P;

	
//Decryption
for(int j=0;j<=25;j++)
{
	K=j;
		for(int i=0;i<P.size();i++)
	{
		int index=ChangeToNumber(P[i])-K;
		if(index<0)
		{
			index=(index+26)%26;

		}
			C[i]=ChangeToChar(index);
	}

	cout<<"Ciphertext when add Plaintext with "<<j<<" : "<<C<<endl;
}
	return 0;
}
