#include<iostream>

using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;

	if (M < 45)
	{
		if (H > 0)cout << (H - 1) << " " << (M + 15);
		else cout << 24 + (H - 1) << " " << M + 15;
	}
	else cout << H <<" "<< M - 45;
}