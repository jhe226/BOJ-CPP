#include<iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A, B;

	while (1)
	{
		cin >> A >> B;
		if (cin.eof() == true) break;		// cin.eof() : Ctrl + z �Է� �� ���� 

		cout << A + B << endl;
	}

	return 0;
}