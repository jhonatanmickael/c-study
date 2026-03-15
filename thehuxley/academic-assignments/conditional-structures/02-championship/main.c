// Author: jhonatanmickael
// Description: Determines the ranking between Cormengo and Flaminthians based on points (Win=3, Draw=1) and goal difference as a tie-breaker.
// Challenge by: TheHuxley
// Date: 2026-03-14

#include <stdio.h>

int main() {
	int cv, ce, cs, fv, fe, fs, pc, pf;

	scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);

	pc = (cv*3) + ce;
	pf  = (fv*3) + fe;

	if (pc > pf) {
		printf("C");
	}
	else if ( pc < pf) {
		printf("F");
	}

	else {
		if (cs == fs) {
			printf("=");
		}
		else if (cs > fs) {
			printf("C");
		}
		else {
			printf("F");
		}
	}


	return 0;
}
