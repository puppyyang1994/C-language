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
	cout << "�����������ͣ�һ���ַ���һ���ַ�����һ������ֵ";
	cout << "�Կո�tab����<Enter>���ָ���" << endl;
	cin >> onelnt1 >> onelnt2 >> oneChar >> strArray >> oneDouble;
	str = strArray;
	cout << "����������ǣ�" << endl
		<< "�ַ����ǣ�\t\t" << str << endl
		<< "��������ֵ�ֱ��ǣ�\t" << onelnt1 << " ��\t" << onelnt2 << endl
		<< "�ַ��ǣ�\t\t" << oneChar << "\n"
		<< "����ֵ�ǣ�\t\t" << oneDouble << endl;

	return 0;


}

