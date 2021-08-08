/*
	Name: 
	Author: Dang Ngoc Thuan
	Date: 08/08/21 10:31
	Description: This is a program to execute CAESAR algorithm when I have learn Sercurity Information, let get check it!
	***********************************************CEASAR*********************************************************************
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
//	Declare variable
	string str;
	int K;


//	Type a string input and key K
do
{
		cout<<"Type a Plaintext input : ";
	fflush(stdin);
	getline(cin,str);
	
	cout<<"K:";cin>>K;
}while(str.find('\0')>0);

	


 
// Encryption
	for(int i=0;i<str.size();i++)
	{
		str[i]=str[i]+K;
		int index=ChangeToNumber(str[i]);
		if(index>25)
		{
			index=index%26;
			str[i]=ChangeToChar(index);
		}
	}
//  Show the Encryption 
	cout<<"The Ciphertext after Encryption is : "<<str<<endl;
	
//Decryption
	for(int i=0;i<str.size();i++)
	{
		str[i]=str[i]-K;
		int index=ChangeToNumber(str[i]);
		if(index<0)
		{
			index=(index+26)%26;
			str[i]=ChangeToChar(index);
		}
	}


//  Show the Decryption 
	cout<<"The Plaintext after Decryption  is : "<<str;
	
	return 0;
}
