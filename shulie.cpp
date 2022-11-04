#include <iostream> 
using namespace std;
void main()
{
	double s = 0;
	int n = 1;
	while (n <= 5)
	{
		s = s + 1.0 / (n * (n + 1));
		n++;
	}
	cout << s << endl;
	system("pause");
}
