#include<iostream>
using namespace std;
int main()
{
	
	string A;
	char B[100];
	
//	cout<<"Nhap A:";cin>>A;
//	cout<<"Cin A:"<<A;
	cout<<"PlainText : ";
	fflush(stdin);
	getline(cin,A);	
	int K;
	cout<<"K:";cin>>K;
	cout<<"***************Encryption**********************"<<endl;
	for(int i=0;i<A.size();i++)
	{

//		cout<<"Index"<<index;
		A[i]=A[i]+K;
		cout<<A[i]-'A'<<endl;
	}

	cout<<"CipherText:"<<A<<endl;
	
	
	
	
	
	//Ciphertext
	cout<<"***************Decryption**********************"<<endl;
		for(int i=0;i<A.size();i++)
	{
		A[i]=A[i]-K;
	}
	
	cout<<"PlainText:"<<A;

	return 0;
}
