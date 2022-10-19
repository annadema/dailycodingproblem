#include <iostream>
using namespace std;
int main() {
	int numbers[] = { 10, 15, 3, 10 };
	int sum = 20;
	bool isPresent = false;

	int numbersLength = sizeof(numbers) / sizeof(int);
	for (int i = 0; i < numbersLength; i++)
	{
		for (int j = 0; j < numbersLength; j++)
		{
			if (i != j)
				if ((numbers[i] + numbers[j]) == sum) {
					isPresent = true;
					break;
				}
		}
	}
	cout << boolalpha << isPresent << endl;
	return 0;
}
