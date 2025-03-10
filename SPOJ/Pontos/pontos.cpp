#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

vector<int> x;
vector<int> y;

double calcular_distancia(int x1, int x2, int y1, int y2) {
	double x = pow((x1 - x2), 2);
	double y = pow((y1 - y2), 2);
	double resul = sqrt(x + y);
	return resul;
}

int main() {
	int n, i, num1, num2;
	double menor_dist = 2000000, dist = 0;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> num1 >> num2;
		x.push_back(num1);
		y.push_back(num2);
	}

	for (i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			dist = calcular_distancia(x[i], x[j], y[i], y[j]);
			if (dist < menor_dist) {
				menor_dist = dist;
			}
		}
	}

	cout << fixed << setprecision(3) << menor_dist << endl;

	return 0;
}