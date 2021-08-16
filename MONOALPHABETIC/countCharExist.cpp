/*
	Name: Hanld the time appeared  of fisrt char in string
	Copyright: 
	Author: Dang Ngoc Thuan
	Date: 16/08/21 08:58
	Description: 
*/

#include<iostream>
using namespace std;
int main()
{
	string P,C;
	cout<<"type your string :"<<endl;
	fflush(stdin);
	getline(cin,P);
	C=P;
	int j;
	int count =0;
	for(int i=0;i<C.size();i++)
	{
	 if(C[0]==C[i])
	 {
	 	count++;
	 }
		
	}
	cout<<"Number of time "<<C[0]<< " appeared is :"<<count;
	return 0;
}
