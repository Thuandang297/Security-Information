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

int check_Index(char s,string str)
{
	for(int i=0;i<str.size();i++)
	{
		if(s==str[i])
		{
			return i;
		}
	}

}
int main()
{
	string P,C;
	fflush(stdin);
	//Nhap vao P
	cout<<"Nhap vao chuoi Khoa:"<<endl;
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

cout<<endl;


//Nhap vao PlanText
string Plain,Cipher;



cout<<"Nhap vao PlainText:";
	fflush(stdin);
	getline(cin,Plain);
	
	Cipher=Plain;
//Ma Hoa
int x1,y1,x2,y2;
int pSize=Plain.size();
for(int i=0;i<pSize;i=i+2)
{

x1=check_Index(Plain[i],S)/5;
y1=check_Index(Plain[i],S)%5;
x2=check_Index(Plain[i+1],S)/5;
y2=check_Index(Plain[i+1],S)%5;

if(x1==x2)
{
		if(y1==4||y2==4)
	{
				if(y1==4)
		{
			cout<<x1<<y1<<x2<<y2;
			cout<<"Ki tu thu 1"<<endl;
			cout<<S[x1*0];
				Plain[i]=S[x1*0];cout<<Plain[i];
				Plain[i+1]=S[x2*5+y2+1];cout<<Plain[i+1];	
				cout<<x1<<y1<<x2<<y2;
		}
	   else	if(y2==4)
		{
			cout<<x1<<y1<<x2<<y2;
			Plain[i]=S[x1*5+y1+1];
			Plain[i+1]=S[x2*5];
	
		}
	}

else
	{
		Plain[i]=S[x1*5+y1+1];
		Plain[i+1]=S[x2*5+y2+1];
	}

}
//Truong hop cung cot
else if(y1==y2)
{
		if(y1==4||y2==4)
		{
			//Truong hop hop cot cuoi
			if(x1==4)
			{

					Plain[i]=S[y1];
					Plain[i+1]=S[x2*5+5+y2];	

			}
		    else if(x2==4)
			{

				Plain[i]=S[x1*5+5+y1];
				Plain[i+1]=S[y1];
		
			}
		}
		else
		{
		Plain[i]=S[x1*5+5+y1];
		Plain[i+1]=S[x2*5+5+y1];
		}
}
else
{
	Plain[i]=S[x1*5+y2];
	Plain[i+1]=S[x2*5+y1];
}
}

cout<<"Ciphertext is: "<<Plain;

	return 0;
}
