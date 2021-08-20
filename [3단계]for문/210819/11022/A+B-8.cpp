#include<iostream>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << "\n";
	}

}