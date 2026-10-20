#include <iostream>
using namespace std;

int main() {
	int a[100][100] = {0};
	int row, column;
	while (cin >> row >> column) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++)
				cin >> a[i][j];
		}
		for (int i = 0; i < row; i++) {
					for (int j = 0; j < column; j++)
						cin >> a[j][i];
		}
	}
	return 0;
}
