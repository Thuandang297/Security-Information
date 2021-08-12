#include<iostream>
using namespace std;
int main()
{
	string P,C;
	cout<<"Chuoi ma hoa: ";
	fflush(stdin);
	getline(cin,P);
	C=P;
	string S1,S2;
//Ma hoa
for(int i=0;i<P.size();i=i+2)
{
	S1+=P[i];
	S2+=P[i+1];
}
C=S1+S2;
cout<<"Chuoi da duoc ma hoa la:";
cout<<C<<endl;
string R;
int n=C.size()/2;
cout<<"N:"<<n<<endl;
//Giai ma
for(int i=0;i<n;i++)
{
	R+=C[i];
	R+=C[i+n];

}
cout<<"Chuoi giai ma:";
cout<<"\n"<<R;
}
