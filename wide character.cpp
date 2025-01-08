#include<iostream>
#include<cstring>
#include <cwchar> // Include the <cwchar> header for wcslen()
using namespace std;
int main()
{
	string name="aswin";
	char name1[50]="Aswin Saathappan";
	wchar_t ch=L'a';
	wchar_t waname[] = L"geeksforgeeks" ;
	cout<<"sizeof(char):"<<sizeof(char)<<endl;
	wcout<<"sizeof(wchar_t):"<<sizeof(wchar_t)<<endl;
	wcout<<"ch:"<<ch<<endl;
    wcout<<"waname:"<<waname<<endl;
    wcout<<"sizeof(waname):"<<sizeof(waname)<<endl;//size include '\0'
	wcout<< "Length of the wstring:"<<wcslen(waname)<<endl;
	cout<<"Length of the string using string:"<<name.length()<<endl;
	cout<<"Length of the string using char:"<<strlen(name1)<<endl;
}
