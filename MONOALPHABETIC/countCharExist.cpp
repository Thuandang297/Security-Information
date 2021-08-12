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
	cout<<"so lan xuat hien cua ki tu "<<C[0]<< " la :"<<count;
	return 0;
}
