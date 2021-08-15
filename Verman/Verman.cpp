/*
	Name: 
	Author: Dang Ngoc Thuan
	Date: 08/08/21 10:31
	Description: This is a program to execute VERMAN algorithm when I have learn Sercurity Information, let's get check it!
	***********************************************VERMAN*********************************************************************
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
	char K;

//	Type a string input and key K
	cout<<"Type a Plaintext input : ";
	fflush(stdin);
	getline(cin,P);
	 C=P;
	
	cout<<"Type K input : ";
   cin>>K;

// Encryption
	for(int i=0;i<P.size();i++)
	{
      	C[i]=P[i]^K;
	}
//  Show the Encryption 
	cout<<"The Ciphertext after Encryption is : "<<C<<endl;
	
//Decryption
	for(int i=0;i<P.size();i++)
	{
	P[i]=C[i]^K;
	}

//  Show the Decryption 
	cout<<"The Plaintext after Decryption  is : "<<P;
	
	return 0;
}
