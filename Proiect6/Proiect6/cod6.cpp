#include <string>
#include <iostream>


using namespace std;

string substring;

void generate_strings(int n, string str = "")
{
	if (n == 0)
	{
		size_t found = str.find(substring);
		if (found != string::npos)
			cout << (str) << endl;
		return;
	}

	for (char i = 'a'; i <= 'z'; i++)
		generate_strings(n - 1, str + i);
}

int main()
{
	substring = "abc";
	generate_strings(5);
	return 0;
}
