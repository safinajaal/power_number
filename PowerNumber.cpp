#include "Functions.h"

int power (int x, unsigned p) {
	int answer = 1;
	if (p != 0) {
		for (int i = 0; i < p; i++) {
			answer *= x;
		}
	}
	else {
		answer = 1;
	}
	return answer;
}