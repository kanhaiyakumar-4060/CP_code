#include <iostream>
using namespace std;

bool isValid(string str, int n)
{

	if (!((str[0] >= 'a' && str[0] <= 'z')
		|| (str[0] >= 'A' && str[0] <= 'Z')
		|| str[0] == '_'))
		return false;

	for (int i = 1; i < str.length(); i++) {
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')
			|| str[i] == '_'))
			return false;
	}

	return true;
}
int main()
{
	cout<<"Enter your string:-";
    string str;
    getline(cin,str);
    int n = str.length();

	if (isValid(str, n))
		cout << "It is a Valid String";
	else
		cout << "It is a Invalid String";

	return 0;
}
