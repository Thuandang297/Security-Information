/*
	Name: Monoalphabetic Algorithms
	Copyright: 
	Author: 
	Date: 15/08/21 16:12
	Description: 
*/

#include<iostream>
using namespace std;

int main()
{
	string P,C,K;
	string A="ABCDEFGHIJKLMNOPQRSUTWXYZ";
	do{
		cout<<"Size of Key must be 26";
		cout<<"Key:";fflush(stdin);getline(cin,K);
	}while(K.size()<26);

	cout<<"P:";fflush(stdin);getline(cin,P);
	C=P;
	
	//Encryption
	for(int i=0;i<P.size();i++)
	{
		for(int j=0;j<26;j++)
		{
			if(P[i]==A[j])
			{
				C[i]=K[j];
			}
		}

	}
	cout<<"Ciphertext : "<<C<<endl;
	//Decryption
	
		for(int i=0;i<C.size();i++)
	{
		for(int j=0;j<26;j++)
		{
			if(C[i]==K[j])
			{
				P[i]=A[j];
			}
		}

	}
	cout<<"Plaintext : "<<P;
	return 0;
}
