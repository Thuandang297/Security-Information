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
		else
		{
			return -1;
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
	cout<<"Type a Plaintext input : ";
//	fflush(stdin);
	getline(cin,P);
	 C=P;
	
	cout<<"K:";cin>>K;
// Encryption
	for(int i=0;i<P.size();i++)
	{
		int index=ChangeToNumber(P[i])+K;
		if(index>25)
		{
			index=index%26;
			cout<<index;
		}
			C[i]=ChangeToChar(index);
	}
//  Show the Encryption 
	cout<<"The Ciphertext after Encryption is : "<<C<<endl;
	
//Decryption
	for(int i=0;i<P.size();i++)
	{

		int index=ChangeToNumber(C[i])-K;
		if(index<0)
		{
			index=(index+26)%26;

		}
			P[i]=ChangeToChar(index);
	}

//  Show the Decryption 
	cout<<"The Plaintext after Decryption  is : "<<P;
	
	return 0;
}
