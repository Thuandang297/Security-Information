#include<iostream>
using namespace std;
int main()
{
	string P,C;
		int k=0;
	fflush(stdin);
	getline(cin,P);
	C=P;
	for(int i=0;i<C.size();i++)
	{
		for(int j=i+1;j<P.size()-1;j++)
		{
			if(C[j]==C[i])
			{
				C.erase(j);
				
			}
		}
		cout<<C[i];
		
	}
	C="ABCABCABCDE";

	for(int i=0;i<C.size();i++)
	{
		k=0;
		
		for(int j=0;j<P.size();j++)
		{
			if(C[i]==P[j])
			{
				k++;
			}
		}
		erase()
		cout<<"\nSo lan xuat hien ki tu"<<C[i]<<"la:";
		cout<<k<<endl;
	}
	return 0;
}
