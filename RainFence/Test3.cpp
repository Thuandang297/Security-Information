/*
	Name: Playfair
	Copyright: 
	Author: Dang Ngoc Thuan
	Date: 16/08/21 09:52
	Description: To hanld the Playfair Encryption
*/

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
cout<<300%26<<"\t";
cout<<80%26<<"\t";
cout<<163%26<<"\t";
cout<<endl;
cout<<372%26<<"\t";
cout<<217%26<<"\t";
cout<<649%26<<"\t";
cout<<endl;
cout<<453%26<<"\t";
cout<<165%26<<"\t";
cout<<571%26<<"\t";

	return 0;
}
