#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "じゃんけん..." << endl;
	cout << "[0]グー" << endl;
	cout << "[1]チョキ" << endl;
	cout << "[2]パー" << endl;

	int a;
	cin >> a;

	if ( a == 0 ) {
	cout << "あなた：グー" << endl;
	cout << "CPU：パー" << endl;
	cout << "あなたの負けです" << endl;
	}else if( a == 1 ){					
	cout << "あなた：チョキ" << endl;
	cout << "CPU：グー" << endl;
	cout << "あなたの負けです" << endl;
	}else if( a == 2 ){
	cout << "あなた：パー" << endl;
	cout << "CPU：チョキ" << endl;
	cout << "あなたの負けです" << endl;
	}else{
	cout << "その手は反則" << endl;
	cout << "あなたの負けです" << endl;
	}

return 0;
}
