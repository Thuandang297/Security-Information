#include<iostream>
using namespace std;
int main()
{
	string P,C;
	fflush(stdin);
	getline(cin,P);
	C=P;
	for(int i=0;i<C.size();i++)
	{
		for(int j=i+1;j<C.size()-1;j++)
		{
			if(C[j]==C[i])
			{
				C.erase(j);
				
			}
		}
		cout<<C[i];
		
	}
	return 0;
}
