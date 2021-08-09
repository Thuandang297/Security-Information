#include<iostream>
using namespace std;
bool check_String(char s,string str)
{
	for(int i=0;i<str.size();i++)
	{
		if(s==str[i])
		{
			return true;
		}
	}
	return false;
}
int main()
{
	string P,C;
	fflush(stdin);
	//Nhap vao P
	getline(cin,P);
	C=P;
	//Cong P voi bang chu cai
	for(char i='A';i<='Z';i++)
	{
		if(i!='J')
		{
				C+=i;
		}
	
	}

cout<<"C:"<<C<<endl;

cout<<"C size is:"<<C.size();
	cout<<endl;
	
	
	
string S;	
	//Xu li trung
for(int i=0;i<C.size();i++)
{
	if(check_String(C[i],S)==false)
	{
		S+=C[i];
	}
}
cout<<"S:"<<S;
cout<<"S size:"<<S.size()<<endl;
//Xu li them mang de luu cac gia tri

string arr[5][5];
for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		int k=i/5;
		arr[i][j]=S[j+i*5];
		cout<<arr[i][j]<<"\t";
	
	}
	cout<<endl;
}


//Nhap vao PlanText
string PlainText;
string CipherText;

cout<<"Nhap vao PlainText:";
	fflush(stdin);
	//Nhap vao P
	getline(cin,PlainText);




	return 0;
}
