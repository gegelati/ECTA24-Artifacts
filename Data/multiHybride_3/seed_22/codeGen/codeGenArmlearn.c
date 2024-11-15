/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 13:48:54
 * With the CodeGen::TPGGenerationEngine.
 */

#include "codeGenArmlearn.h"
#include "codeGenArmlearn_program.h"
#include <limits.h>
#include <assert.h>
#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

int bestProgram(double *results, int nb) {
	int bestProgram = 0;
	double bestScore = (isnan(results[0]))? -INFINITY : results[0];
	for (int i = 1; i < nb; i++) {
		double challengerScore = (isnan(results[i]))? -INFINITY : results[i];
		if (challengerScore >= bestScore) {
			bestProgram = i;
			bestScore = challengerScore;
		}
	}
	return bestProgram;
}

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, A18, A19, A20, A21, A22, A23, A24, };

int inferenceTPG() {
	enum vertices currentVertex = T17;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A19, A20, A18,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A22, A18,  };

			double T1Scores[2];

			T1Scores[0] = P3();
			T1Scores[1] = P2();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { T1, T0,  };

			double T2Scores[2];

			T2Scores[0] = P4();
			T2Scores[1] = P5();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { A18, A20, T1,  };

			double T3Scores[3];

			T3Scores[0] = P6();
			T3Scores[1] = P1();
			T3Scores[2] = P7();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[4] = { T2, T2, A18, T0,  };

			double T4Scores[4];

			T4Scores[0] = P8();
			T4Scores[1] = P9();
			T4Scores[2] = P10();
			T4Scores[3] = P11();

			int best = bestProgram(T4Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[5] = { T2, A24, T2, A18, A23,  };

			double T5Scores[5];

			T5Scores[0] = P12();
			T5Scores[1] = P13();
			T5Scores[2] = P14();
			T5Scores[3] = P15();
			T5Scores[4] = P16();

			int best = bestProgram(T5Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { A18, A23, T0, T2,  };

			double T6Scores[4];

			T6Scores[0] = P17();
			T6Scores[1] = P18();
			T6Scores[2] = P11();
			T6Scores[3] = P19();

			int best = bestProgram(T6Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { T6, T2, T2, T5,  };

			double T7Scores[4];

			T7Scores[0] = P20();
			T7Scores[1] = P21();
			T7Scores[2] = P12();
			T7Scores[3] = P22();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T6, T2, T5, T4,  };

			double T8Scores[4];

			T8Scores[0] = P20();
			T8Scores[1] = P12();
			T8Scores[2] = P22();
			T8Scores[3] = P23();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[4] = { T7, T8, A20, T3,  };

			double T9Scores[4];

			T9Scores[0] = P24();
			T9Scores[1] = P25();
			T9Scores[2] = P26();
			T9Scores[3] = P27();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[4] = { T9, A21, T9, A23,  };

			double T10Scores[4];

			T10Scores[0] = P28();
			T10Scores[1] = P29();
			T10Scores[2] = P30();
			T10Scores[3] = P31();

			int best = bestProgram(T10Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[5] = { A19, T2, T4, T9, A23,  };

			double T11Scores[5];

			T11Scores[0] = P32();
			T11Scores[1] = P19();
			T11Scores[2] = P33();
			T11Scores[3] = P28();
			T11Scores[4] = P16();

			int best = bestProgram(T11Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[3] = { T11, T10, T7,  };

			double T12Scores[3];

			T12Scores[0] = P34();
			T12Scores[1] = P35();
			T12Scores[2] = P24();

			int best = bestProgram(T12Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[2] = { T10, T11,  };

			double T13Scores[2];

			T13Scores[0] = P36();
			T13Scores[1] = P37();

			int best = bestProgram(T13Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[3] = { A24, T10, T10,  };

			double T14Scores[3];

			T14Scores[0] = P38();
			T14Scores[1] = P39();
			T14Scores[2] = P36();

			int best = bestProgram(T14Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[5] = { T12, T2, T9, T9, T14,  };

			double T15Scores[5];

			T15Scores[0] = P40();
			T15Scores[1] = P41();
			T15Scores[2] = P42();
			T15Scores[3] = P28();
			T15Scores[4] = P43();

			int best = bestProgram(T15Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[4] = { T14, A24, T13, T14,  };

			double T16Scores[4];

			T16Scores[0] = P44();
			T16Scores[1] = P45();
			T16Scores[2] = P46();
			T16Scores[3] = P47();

			int best = bestProgram(T16Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[7] = { T16, T15, A23, A24, T15, A23, T15,  };

			double T17Scores[7];

			T17Scores[0] = P48();
			T17Scores[1] = P49();
			T17Scores[2] = P50();
			T17Scores[3] = P51();
			T17Scores[4] = P52();
			T17Scores[5] = P53();
			T17Scores[6] = P54();

			int best = bestProgram(T17Scores, 7);
			currentVertex = next[best];
			break;
		}
		case A18: {
			return 3;
			break;
		}
		case A19: {
			return 5;
			break;
		}
		case A20: {
			return 0;
			break;
		}
		case A21: {
			return 7;
			break;
		}
		case A22: {
			return 1;
			break;
		}
		case A23: {
			return 2;
			break;
		}
		case A24: {
			return 4;
			break;
		}
		}
	}
}
