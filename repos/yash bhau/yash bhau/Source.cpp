#include<iostream>
using namespace std;

int main()
{
	int apple;
	int x=10;
	int sum = 0;
	cin >> apple;

	if (apple == 0)
	{
		return 0;
	}


	if (apple > x)
	{
		cout << "apples are more";
	}

	if (apple < x)
	{
		cout << "need more apples";
	}



	while (sum == 10)
	{
		cout << "total apple needed";
		cin >> sum;
		if (sum < 10)
		{
			cout << "need more apples";
		}
	}






}
