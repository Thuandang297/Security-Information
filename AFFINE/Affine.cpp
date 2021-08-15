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
//Convert Char to Number 
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
	//Convert numver to char
	char ChangeToChar(int n)
	{
			return 'A'+n;		
	}
//Check index of element n in array arr if true return index and false ret
int checkIndex(int arr [],int n)
{
	for(int i=0;i<sizeof(arr);i++)
	{
		if(n==arr[i])
		{
			return i;
		}

	}
	return -1;

}

int main()
{
		//	Declare variable
	int A[12];
	int B[12];//A^-1
	int m=0;
	string P,C;
	
	//Save A value and A- values in 2 array A and B
	for(int i=0;i<26;i++)
	{
		for(int j=0;j<26;j++)
		{
			if((i*j)%26==1)
			{
				A[m]=i;
				B[m]=j;
				m++;
		
			}
		}
		
	}
	int a,b;

	//Show A and A^-1 value
	for(int i=0;i<12;i++)
	{
		cout<<"A:"<<A[i]<<" and A(1): "<<B[i]<<endl;
	}
	do
	{
		
		cout<<"Type a in A"<<endl;
		cout<<"A:";cin>>a;
		cout<<"check a in A:"<<checkIndex(A,a)<<endl;
		cout<<"B:";cin>>b;
	}while(checkIndex(A,a)==-1);
	cout<<"This value is accepted!"<<endl;
	


//	Type a string input and key K
	cout<<"Type a Plaintext input : ";
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
