#include<iostream>
#include<cmath>
#include <sstream>
using namespace std;
string numberToString(unsigned int n) {
    stringstream ss;
    ss << n;
    return ss.str();
}
int ChuyenSo(char a)
{
	return a-0;
}
char ChuyenChu(int n)
{
	return 'A'+n;
}
long long Dec2Bin(int decimalNumber) 
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}

long Sum(long a,long b)
{
	
}
int main()
{
	string K,P,C,KEY;
	string Plain;
	string S;
	long Bit;
	cout<<"Nhap vao chuoi:";
	fflush(stdin);
	getline(cin,P);
	C=P;
	cout<<"Nhap vao K:";
	fflush(stdin);
	getline(cin,K);
	cout<<"Day sau khi ma hoa dang bit se la"<<endl;
	for(int i=0;i<P.size();i++)
	{
		int k=ChuyenSo(P[i]);
		Bit=Dec2Bin(k);
		S=numberToString(Bit);
		Plain+=S;
	
	   
	   	
	}
	
	cout<<Plain<<"\n";
	cout<<"Khoa sau khi chuyen sang dang bit se la"<<endl;
	for(int i=Plain.size();i>0;i--)
	{
		KEY+=K[i%(K.size())];
	}
	cout<<"\n";
	cout<<Plain<<endl;
	cout<<"\n"<<KEY;
	string Cipher=KEY;
	for(int i=Plain.size();i>0;i--)
	{
		if(Plain[i]== '1' && KEY[i]=='1')
		{
			Cipher[i]='0';
		}
		else if(Plain[i]=='0' && KEY[i]=='0')
		{
			Cipher[i]='0';
		}
		else if(Plain[i]=='1' && KEY[i]=='0' ||Plain[i]=='0' &&KEY[i]=='1')
		{
			Cipher[i]='1';
		}
	}
	cout<<"\nChuoi sau khi ma hoa thanh cong la:"<<endl<<Cipher;
	
	cout<<"Chuyen ve dang chu:"<<endl;
	


	
	

}
