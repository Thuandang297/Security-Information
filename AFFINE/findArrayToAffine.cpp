/*
	Name: Dang Ngoc Thuan
	Copyright: 
	Author: 
	Date: 15/08/21 12:42
	Description: To find the A^(-1) in Affine Algorithm
*/

#include<iostream>
using namespace std;
int main()
{
	int A[12];
	int B[12];
	int m=0;
	for(int i=0;i<26;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(i*j%26==1)
			{
				A[m]=i;
				B[m]=j;
				cout<<"A ["<<m<<"] is:"<<A[m]<<"\t";
				cout<<"B ["<<m<<"] is:"<<B[m]<<endl;
				m++;
			}
		}
		
	}
	
	return 0;
}
