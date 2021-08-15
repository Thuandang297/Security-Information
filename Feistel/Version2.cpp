#include<iostream>
using namespace std;
int main()
{
	
	 string P;
	char K[3],L[3],R[3];
	cout<<"Nhap vao plaintext:";cin>>P;
	 L[0]=P[0];
	 R[0]=P[1];
	cout<<"Nhap vao chuoi k:";cin>>K;

cout<<"K[0]:"<<K[0]<<endl;
cout<<"L[0]:"<<L[0]<<endl;
cout<<"R[0]:"<<R[0]<<endl;
    //Ma hoa
    for(int i=1;i<=2;i++)
    {
    	K[i]=K[0]<<i;cout<<"K["<<i<<"]:"<<K[i]<<endl;
    	R[i]=L[i-1]^(R[i-1]+K[i]);cout<<"R["<<i<<"]:"<<R[i]<<endl;
    	L[i]=R[i-1];cout<<"L["<<i<<"]:"<<L[i]<<endl;
	}
	char C[2];
cout<<"day ma hoa la:"<<endl;
C[0]=L[2];
C[1]=R[2];
cout<<C<<endl;


//Giai ma

 
cout<<"K[2]:"<<K[2]<<endl;
cout<<"L[2]:"<<L[2]<<endl;
cout<<"R[2]:"<<R[2]<<endl;    
int j=0;
    for(int i=1;i>=0;i--)
    {
    	j=j+1;
    	K[i]=K[i];cout<<"K["<<i<<"]:"<<K[i]<<endl;
    	R[i]=L[i+1];cout<<"R["<<i<<"]:"<<R[i]<<endl;
    	L[i]=R[i+1]^(R[i]+K[i+1]);cout<<"L["<<i<<"]:"<<L[i]<<endl;
	}
cout<<"Chuoi giai ma la:"<<endl;
P[0]=L[0];
P[1]=R[0];
cout<<P<<endl;


	return 0;
}
