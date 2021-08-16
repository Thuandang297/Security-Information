#include<iostream>
using namespace std;
int main()
{
	string P,C;
	cout<<"PLAINTEXT: ";
	fflush(stdin);
	getline(cin,P);
	C=P;
	int a,b;
	a=3;b=10;
//	cout<<"nhap so hang:";cin>>a;
//	cout<<"nhap so cot:";cin>>b;
	string arr[a][b];
	//Chuan Hoa va them ki tu vao cho du 30 ki tu
for(int i=P.size();i<a*b;i++)
{
	C+=P[i%P.size()];
}
cout<<C<<"size:"<<C.size()<<endl;
for(int i=0;i<a;i++)
{
	for(int j=0;j<b;j++)
	{
		arr[i][j]=C[j+i*10];
		cout<<arr[i][j]<<"\t";
	
	}
	cout<<endl;

}
	string R,S;
	//Dua chuoi ra theo dang hang
	for(int i=0;i<b;i++)
	{
		cout<<"Cot thu"<<i<<endl;
		for(int j=0;j<a;j++)
		{
			cout<<arr[j][i]<<"\t";
			R+=arr[j][i];
		}
		cout<<endl;
	
	}
		cout<<"Chuoi Cipher text la:"<<R;

}	

