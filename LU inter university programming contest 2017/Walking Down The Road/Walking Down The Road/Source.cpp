#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int N, M;
		
		cin >> N >> M;

		vector<int> pos(N);
		
		for (auto& elem : pos)
			cin >> elem;

		sort(begin(pos), end(pos));

		double diff = (double)(pos[N / 2] - pos[N / 2 - 1]);
		double val =  diff/ (double)M;

		cout << val << endl;
		
	}
	return 0;
}