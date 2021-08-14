#include<iostream>
using namespace std;
int main()
{
	
	 string a;
	 string b;
	unsigned char c;
	unsigned char k;
	int n;
	
	cout<<"Nhap vao plaintext:";cin>>a;
	char L=a[0];
	char R=a[1];
	char L1,L2,R1,R2;
	cout<<"L:"<<L<<endl;
	cout<<"R:"<<R<<endl;
	cout<<"Nhap vao chuoi k:";cin>>k;

	char  K[2];
    k=k<<1;
    R1=L^(R+k<<1);
    L1=R;
    k=k<<2;
    R2=L1^(R1+k<<2);
    L2=R1;
cout<<"day ma hoa la:"<<endl;
cout<<R2<<L2;
char C[2];
C[0]=R2;
C[1]=L2;
cout<<C;
	return 0;
}
