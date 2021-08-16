/*
	Name: Playfair
	Copyright: 
	Author: Dang Ngoc Thuan
	Date: 16/08/21 09:52
	Description: To hanld the Playfair Encryption
*/

#include<iostream>
using namespace std;
bool check_String(char s,string str)
{
	for(int i=0;i<str.size();i++)
	{
		if(s==str[i])
		{
			return true;
		}
	}
	return false;
}

int check_Index(char s,string str)
{
	for(int i=0;i<str.size();i++)
	{
		if(s==str[i])
		{
			return i;
		}
	}

}
int main()
{
	string P,C,K;
	fflush(stdin);
	//Nhap vao K
	cout<<"Key K : "<<endl;
	fflush(stdin);
	getline(cin,K);
	//Cong K voi bang chu cai
	string A="ABCDEFGHIJKLMNOPQRSUTWXYZ";
	for(char i='A';i<='Z';i++)
	{

				K+=i;
	
	}
//cout<<"K:"<<K<<endl;

string KEY;	
	//Hanld duplicate char
for(int i=0;i<K.size();i++)
{
	if(check_String(K[i],KEY)==false)
	{
		KEY+=K[i];
	}
}
cout<<"Khoa K:"<<KEY<<endl<<"size Key is :"<<KEY.size()<<endl;
cout<<"PlainText : ";
	fflush(stdin); 
	getline(cin,P);	
	C=P;
	//Encryption
	for(int i=0;i<P.size();i++)
	{
		for(int j=0;j<26;j++)
		{
			if(P[i]==A[j])
			{
				C[i]=KEY[j];
			}
		}

	}
	cout<<"Ciphertext : "<<C<<endl;
	//Decryption
	
		for(int i=0;i<C.size();i++)
	{
		for(int j=0;j<26;j++)
		{
			if(C[i]==KEY[j])
			{
				P[i]=A[j];
			}
		}

	}
	cout<<"Plaintext : "<<P;
//Ma Hoa


	return 0;
}
