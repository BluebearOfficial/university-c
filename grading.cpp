#include<iostream>
using namespace std;
int main() {
	cout << "\n 请输入你的百分制成绩：";
	int m;
	cin >> m;
	switch (m / 10)
	{
		case 10: cout << "你的等级是：A" << endl;
		break;
		case 9 : cout << "你的等级是：A" << endl;
		break;
		case 8: cout << "你的等级是：B" << endl;
			break;
		case 7: cout << "你的等级是：C" << endl;
			break;
		case 6: cout << "你的等级是：D" << endl;
			break;
		case 5: cout << "你的等级是：E" << endl;
			break;
		case 4: cout << "你的等级是：E" << endl;
			break;
		case 3: cout << "你的等级是：E" << endl;
			break;
		case 2: cout << "你的等级是：E" << endl;
			break;
		case 1: cout << "你的等级是：E" << endl;
			break;
		case 0: cout << "你的等级是：E" << endl;
			break;
	}
}
