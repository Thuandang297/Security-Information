#include<iostream>
using namespace std;
string MHKhoi(char P0,char P1,char K)
{
		char K[3],L[3],R[3];
		string C="  ";
		//Ma hoa khoi
		R[0]=P0;
		L[0]=P1;
		K[0]=K;
	 for(int i=1;i<=2;i++)
    	{
    		K[i]=K[0]<<i;
    		R[i]=L[i-1]^(R[i-1]+K[i]);
    		L[i]=R[i-1];
		}

cout<<"Day ma hoa la:"<<endl;
C[0]=R[2];
C[1]=L[2];
return C;
		
		
				
}
int main()
{
	
	 string P,C;
	 char K;



	cout<<"Nhap vao plaintext:";getline(cin,P);
	 L[0]=P[0];
	 R[0]=P[1];
	cout<<"L:"<<L[0]<<endl;
	cout<<"R:"<<R[0]<<endl;
	cout<<"Nhap vao chuoi k:";cin>>K;
//Ma Hoa
if(P.size()%2==1)
{
	P=P+'X';
}
for(int i=0;i<P.size();i=i+2)
{
	C=C+MHKoi(P[i],P[i+1],K);
}

    //Ma hoa
    R[0]=P[0];
    L[0]=P[1];
    



	return 0;
}
