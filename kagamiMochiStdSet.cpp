// std::setを用いた解
#include <iostream>
#include <set>
using namespace std;

int main() {
		int N;
		int d[110];
		cin >> N;
		for (int i = 0; i < N; ++i) cin >> d[i];

		set<int> values; // insertするときに重複を取り除いてくれます
		for (int i = 0; i < N; ++i) {
				values.insert(d[i]); // 挿入します
		}

		// setのサイズを出力します
		cout << values.size() << endl;
}
