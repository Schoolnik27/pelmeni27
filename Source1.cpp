#include <iostream>
using namespace std;

int main() {
	double M, t, a_f, q_p, q_f, q_T;
	cout << "Vvedite M: "; cin >> M;
	cout << "Vvedite t: "; cin >> t;
	cout << "Vvedite a_f: "; cin >> a_f;
	cout << "Vvedite q_p: "; cin >> q_p;
	cout << "Vvedite q_f: "; cin >> q_f;
	cout << "Vvedite q_T: "; cin >> q_T;

	double n_p, n_f, n_T, Q_p, Q_f, Q_T;
	//1
	Q_p = M / (2 * t);
	n_p = Q_p / q_p;
	//2
	Q_f = (a_f / 100) * Q_p;
	n_f = Q_f / q_f;
	//3
	Q_T = (1 - (a_f) / 100) * Q_p;
	n_T = Q_T / q_T;
	//vivod
	cout << "n_p: " << n_p << endl;
	cout << "n_f: " << n_f << endl;
	cout << "n_T: " << n_T << endl;

}
