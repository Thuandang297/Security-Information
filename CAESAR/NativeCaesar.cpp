#include<iostream>
using namespace std;
int main()
{
	
	string A;

	
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
		int index=((A[i]-'A')+K)%26;
		A[i]='A'+index;

	}
	cout<<"CipherText:"<<A<<endl;
	//Ciphertext
	cout<<"***************Decryption**********************"<<endl;
		for(int i=0;i<A.size();i++)
	{
		int index =((A[i]-'A')-K+26)%26;
		A[i]='A'+index;
	}
	
	cout<<"PlainText:"<<A;

	return 0;
}
