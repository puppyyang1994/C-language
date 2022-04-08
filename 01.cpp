#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int onelnt1, onelnt2;
	char strArray[20];
	string str;
	double oneDouble;
	char oneChar = 'a';
	cout << "输入两个整型，一个字符，一个字符串和一个浮点值";
	cout << "以空格、tab键或<Enter>键分隔：" << endl;
	cin >> onelnt1 >> onelnt2 >> oneChar >> strArray >> oneDouble;
	str = strArray;
	cout << "输入的数据是：" << endl
		<< "字符串是：\t\t" << str << endl
		<< "两个整型值分别是：\t" << onelnt1 << " 和\t" << onelnt2 << endl
		<< "字符是：\t\t" << oneChar << "\n"
		<< "浮点值是：\t\t" << oneDouble << endl;

	return 0;


}

