#include<iostream>
using namespace std;
int main()
{
		string P,C;
	cout<<"Chuoi ma hoa: ";
	fflush(stdin);
	getline(cin,P);
	C=P;
	int a,b;
	cout<<"nhap so hang:";cin>>a;
	cout<<"nhap so cot:";cin>>b;
	string arr[a][b];
		for(char i='A';i<='Z';i++)
	{
		if(i!='J')
		{
				C+=i;
		}
	
	}
for(int i=0;i<a;i++)
{
	for(int j=0;j<b;j++)
	{
		int k=i/b;
		arr[i][j]=C[j+i*a];
		cout<<arr[i][j]<<"\t";
	
	}
	cout<<endl;
}
	string R;
	cout<<"Sau day se la chuoi cua minh";
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
		cout<<"Chuoi R la:"<<R;
		
		
		
		
		cout<<"Chuoi giai ma la:"
		string S;
	for(int i=0;i<b;i++)
	{
		cout<<"Cot thu"<<i<<endl;
		for(int j=0;j<a;j++)
		{
			cout<<arr[j][i]<<"\t";
			S+=arr[j][i];
		}
		cout<<endl;
	
	}
}	

