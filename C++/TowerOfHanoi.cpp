//  Tower of Hanoi

#include<iostream>

using namespace std;

void TowerOfHanoi(int n, char source, char destiny, char helper)
{
	if(n==0)
	{
		return ;
	}

	TowerOfHanoi(n-1,source,helper,destiny);
	cout << "Moving from " << source << " to " << destiny << endl ;
	TowerOfHanoi(n-1,helper,destiny,source);
}

int main()
{
	int n;
	cin >> n;
	TowerOfHanoi(n,'A','C','B');
	return 0;
}
