#include<iostream>
using namespace std;
int main()
{
	string P,C;
	fflush(stdin);
	getline(cin,C);

	for(int i=0;i<C.size();i++)
	{
		for(int j=i+1;j<C.size()-1;j++)
		{
			if(C[i]==C[j])
			{
				C.erase(j,j+1);
				j--;
				
			}
		}
		
	}
	cout<<C;
	
	return 0;
}
