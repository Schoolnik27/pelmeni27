#include <iostream>
using namespace std;

int main() {
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
}