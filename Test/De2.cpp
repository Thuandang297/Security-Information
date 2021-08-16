#include<iostream>
using namespace std;
int main()
{
	string P,C;
P="TOTUAN";
	C=P;
	int a,b;
	a=8;b=4;
	string arr[a][b];
for(int i=P.size();i<a*b;i++)
{
	C+=P[i%P.size()];
}
cout<<C<<endl<<"size:"<<C.size()<<endl;
for(int i=0;i<a;i++)
{
	for(int j=0;j<b;j++)
	{
		arr[i][j]=C[j*8+i];
		cout<<arr[i][j]<<"\t";
	
	}
	cout<<endl;

}
	string R,S;
	//Dua chuoi ra theo dang hang

	for(int i=0;i<a;i++)
	{
	
		for(int j=0;j<b;j++)
		{

			if(i%2!=0)
			{
//			cout<<arr[i][j]<<"\t";
			R+=arr[i][j];
			}
			else
			{
//			cout<<arr[i][j]<<"\t";
			S+=arr[i][j];
			}

		}
		cout<<endl;
	
	}
		cout<<"Chuoi Cipher text la:"<<R+S;

}	

