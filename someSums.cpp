#include <iostream>
using namespace std;

// 各行の和を計算する関数
int findSumOfDigits(int n) {
	int sum = 0;
	while (n > 0) { // nが0になるまで
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int N, A, B;
	cin >> N >> A >> B;
	int total = 0;
	for (int i = 1; i <= N; ++i) {
		int sum = findSumOfDigits(i); // iの各桁の和
		if (sum >= A && sum <= B) { //iの各行の和がA以上B以下かどうか
			total += i;
		}
	}
	cout << total << endl;
}
