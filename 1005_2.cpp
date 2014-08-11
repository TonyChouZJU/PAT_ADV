#include <iostream>
using namespace std;
void print(int num);
int main()
{
	char c;
	int sum=0;
	while (cin >> c)
	{
		sum += c - '0';
	}
	print(sum);
	cout << endl;
	return 0;
}
void print(int num)
{
	static const char *dig2str[] =
	{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
			"nine", };
	int high = num / 10;
	int low = num % 10;
	if (high != 0)
	{
		print(high);
		cout << ' ';
	}
	cout << dig2str[low];
}
