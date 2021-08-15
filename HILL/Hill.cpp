/*
	Name: Dang Ngoc Thuan
	Copyright: 
	Author: 
	Date: 15/08/21 20:54
	Description: Hill algorithms
*/

#include<iostream>
using namespace std;
int changeToNumber( char c)
{
	if(c>='A' && c<='Z')
	{
			return c-'A';
	}

	else if(c>='a' && c<='z')
	{
			return c-'a';
	}

}
char changeToChar(int n)
{
	return 'A'+n;
}
int main()
{
	string P,C;
	int n;
	cout<<"Nhap size cho ma tran : ";cin>>n;
	int K [n][n] ;
	int Q [n][n] ;
	//Xu li ma tram
//	
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cout<<"K["<<i<<"]["<<j<<"] :";cin>>K[i][j];
//		}
//	}
//	//In ra ma tran
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cout<<K[i][j]<<" \t";
//		}
//		cout<<endl;
//	}
	cout<<"P : ";
	fflush(stdin);
	getline(cin,P);
	
	//Xu li ma hoa
	C=P;
	for(int i=0;i<P.size();i++)
	{
		cout<<P[i]<<"vs"<<changeToNumber(P[i])<<"\t";
    	C[i]=changeToNumber(P[i]);
//		cout<<C[i];
	}
//	cout<<C;
	//Xu li giai ma
	return 0;
}
