/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 13:48:33
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, A16, A17, A18, A19, A20, A21, };

int inferenceTPG() {
	enum vertices currentVertex = T15;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A16, A19, A17,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[8] = { A17, A16, A18, A16, A17, A16, A19, A19,  };

			double T1Scores[8];

			T1Scores[0] = P3();
			T1Scores[1] = P4();
			T1Scores[2] = P5();
			T1Scores[3] = P6();
			T1Scores[4] = P7();
			T1Scores[5] = P0();
			T1Scores[6] = P8();
			T1Scores[7] = P9();

			int best = bestProgram(T1Scores, 8);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { A18, A16, A16, A19,  };

			double T2Scores[4];

			T2Scores[0] = P5();
			T2Scores[1] = P10();
			T2Scores[2] = P11();
			T2Scores[3] = P8();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[6] = { A16, A18, T1, A18, A17, A16,  };

			double T3Scores[6];

			T3Scores[0] = P12();
			T3Scores[1] = P5();
			T3Scores[2] = P13();
			T3Scores[3] = P14();
			T3Scores[4] = P15();
			T3Scores[5] = P6();

			int best = bestProgram(T3Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { T2, T3,  };

			double T4Scores[2];

			T4Scores[0] = P16();
			T4Scores[1] = P17();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[6] = { T2, A18, T0, T1, A17, A17,  };

			double T5Scores[6];

			T5Scores[0] = P18();
			T5Scores[1] = P19();
			T5Scores[2] = P20();
			T5Scores[3] = P21();
			T5Scores[4] = P22();
			T5Scores[5] = P15();

			int best = bestProgram(T5Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { T4, T5, T1, T0, A20,  };

			double T6Scores[5];

			T6Scores[0] = P23();
			T6Scores[1] = P24();
			T6Scores[2] = P25();
			T6Scores[3] = P26();
			T6Scores[4] = P27();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[5] = { T4, T5, T1, T0, T0,  };

			double T7Scores[5];

			T7Scores[0] = P23();
			T7Scores[1] = P24();
			T7Scores[2] = P25();
			T7Scores[3] = P26();
			T7Scores[4] = P20();

			int best = bestProgram(T7Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T6, T1, T5, A17,  };

			double T8Scores[4];

			T8Scores[0] = P28();
			T8Scores[1] = P25();
			T8Scores[2] = P29();
			T8Scores[3] = P30();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[4] = { A20, T1, T7, A17,  };

			double T9Scores[4];

			T9Scores[0] = P31();
			T9Scores[1] = P32();
			T9Scores[2] = P33();
			T9Scores[3] = P15();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[4] = { T5, T8, A20, T8,  };

			double T10Scores[4];

			T10Scores[0] = P34();
			T10Scores[1] = P35();
			T10Scores[2] = P31();
			T10Scores[3] = P36();

			int best = bestProgram(T10Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[2] = { T9, A21,  };

			double T11Scores[2];

			T11Scores[0] = P37();
			T11Scores[1] = P38();

			int best = bestProgram(T11Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[4] = { T9, T10, A21, T10,  };

			double T12Scores[4];

			T12Scores[0] = P39();
			T12Scores[1] = P40();
			T12Scores[2] = P41();
			T12Scores[3] = P42();

			int best = bestProgram(T12Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[5] = { T8, T6, T10, T1, A21,  };

			double T13Scores[5];

			T13Scores[0] = P43();
			T13Scores[1] = P44();
			T13Scores[2] = P45();
			T13Scores[3] = P32();
			T13Scores[4] = P46();

			int best = bestProgram(T13Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[2] = { T10, T11,  };

			double T14Scores[2];

			T14Scores[0] = P47();
			T14Scores[1] = P48();

			int best = bestProgram(T14Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[7] = { T12, T11, A20, T10, T13, A18, T14,  };

			double T15Scores[7];

			T15Scores[0] = P49();
			T15Scores[1] = P48();
			T15Scores[2] = P50();
			T15Scores[3] = P51();
			T15Scores[4] = P52();
			T15Scores[5] = P53();
			T15Scores[6] = P54();

			int best = bestProgram(T15Scores, 7);
			currentVertex = next[best];
			break;
		}
		case A16: {
			return 1;
			break;
		}
		case A17: {
			return 3;
			break;
		}
		case A18: {
			return 0;
			break;
		}
		case A19: {
			return 5;
			break;
		}
		case A20: {
			return 2;
			break;
		}
		case A21: {
			return 4;
			break;
		}
		}
	}
}
