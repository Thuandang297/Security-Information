/*
	Name: Affine Algorithm
	Copyright: 
	Author: Dang Ngoc Thuan
	Date: 08/08/21 15:09
	Description: 
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

int checkIndex(int arr [],int n)
{
	for(int i=0;i<sizeof(arr);i++)
	{
		if(n==arr[i])
		{
			return i;
		}

	}
}

int main()
{
		//	Declare variable
	int A[12];
	int B[12];
	int m=0;
	string P,C;
	for(int i=0;i<26;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(i*j%26==1)
			{
				A[m]=i;
				B[m]=j;
				m++;
			}
		}
		
	}
	int a,b;
	do
	{
		cout<<"Type the right a"<<endl;
		cout<<"A:";cin>>a;
		cout<<"B:";cin>>b;
	}while(checkIndex(A,a)==false);
	
	


//	Type a string input and key K
	cout<<"Type a Plaintext input : "<<endl;
	fflush(stdin);
	getline(cin,P);
	 C=P;


// Encryption
	for(int i=0;i<P.size();i++)
	{
		int index=ChangeToNumber(P[i])*a+b;
		if(index>25)
		{
			index=index%26;
		}
			C[i]=ChangeToChar(index);
	}
//  Show the Encryption 
	cout<<"The Ciphertext after Encryption is : "<<C<<endl;
	
	

//Decryption
	int a_div=checkIndex(A,a);
	for(int i=0;i<P.size();i++)
	{
		

		int index=  B[a_div]*(ChangeToNumber(C[i])-b)%26;
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
