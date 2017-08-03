#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N;
		cin >> N;

		vector<long long> numbers(N);

		for (auto& elem : numbers)
			cin >> elem;

		long long accumulated_sum = -1000000;

		int start, end;
		start = end = 0;
		long long sum = 0;
		long long total_score = 0;
		while (end < N)
		{
			if ((sum + numbers[end]) * (end - start + 1) >= accumulated_sum)
			{
				sum += numbers[end];
				accumulated_sum = sum * (end - start + 1);
				end++;
			}
			else
			{
				total_score += accumulated_sum;
				accumulated_sum = -1000000;
				sum = 0;
			}
			
		}

		cout << total_score + accumulated_sum << endl;
	}

	return 0;
}