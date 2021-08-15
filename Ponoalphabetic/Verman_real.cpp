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
	string P,C,K;
//	char K;

//	Type a string input and key K
	cout<<"Type a Plaintext input : ";
	fflush(stdin);
	getline(cin,P);
	 C=P;
	
	cout<<"Type K input : ";
	//char 
//   cin>>K;
//string

	fflush(stdin);
	getline(cin,K);
// Encryption
int j=0;
	for(int i=0;i<P.size();i++)
	{
      	C[i]=P[i]^K[j];
      	j++;
      	if(j==K.size())
      	{
      		j=0;
		  }
	}
//  Show the Encryption 
	cout<<"The Ciphertext after Encryption is : "<<C<<endl;
j=0;
//Decryption
	for(int i=0;i<C.size();i++)
	{
		
     	P[i]=C[i]^K[j];
      	j++;
      	if(j==K.size())
      	{
      		j=0;
		  }

	}

//  Show the Decryption 
	cout<<"The Plaintext after Decryption  is : "<<P;
	
	return 0;
}
