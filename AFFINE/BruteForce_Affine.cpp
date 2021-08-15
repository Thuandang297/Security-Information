/*
	Name: Affine Algorithm
	Copyright: 
	Author: Dang Ngoc Thuan
	Date: 08/08/21 15:09
	Description: This algorithms to hanld Decrypt the Affine code
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


//	Type a string input and key K
	cout<<"Type a Cyphertext input : "<<endl;
	fflush(stdin);
	getline(cin,C);
	 P=C;
//Decryption
for(int i=0;i<12;i++)
{
	for(int j=0;j<26;j++)
	{
		a=A[i];
		b=j;
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
			cout<<"The Plaintext after Decryption with a="<<a<<" b="<<b<<"  is : "<<P<<endl;
	}
}


//  Show the Decryption 

	
	return 0;
}
