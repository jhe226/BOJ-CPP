#include<iostream>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = N; i >= 1; i--)
	{
		cout << i << "\n";
	}

}