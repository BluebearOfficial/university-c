#include<iostream>
using namespace std;
void main() {
	int number;
	cout << "\n 请输入一个整数：";
	cin >> number;
	if (number > 0)//正数
	{
		cout << "\n 输入的数大于0" << endl;
		if (number >= 1 && number <= 10) {
			cout << "并且小于或等于10" << endl;

		}
	}
	else {
		cout << "\n输入的数小于或等于0" << endl;
	}
}
