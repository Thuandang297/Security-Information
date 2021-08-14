#include<iostream>
using namespace std;
int main()
{
	
	 string P;
	char K[3],L[3],R[3];
	cout<<"Nhap vao plaintext:";cin>>P;
	 L[0]=P[0];
	 R[0]=P[1];
	cout<<"L:"<<L[0]<<endl;
	cout<<"R:"<<R[0]<<endl;
	cout<<"Nhap vao chuoi k:";cin>>K;


    //Ma hoa
    R[0]=P[0];
    L[0]=P[1];
    
    for(int i=1;i<=2;i++)
    {
    	K[i]=K[0]<<i;
    	R[i]=L[i-1]^(R[i-1]+K[i]);
    	L[i]=R[i-1];
	}
	char C[2];
cout<<"day ma hoa la:"<<endl;
C[0]=R[2];
C[1]=L[2];
cout<<C<<endl;


	return 0;
}
