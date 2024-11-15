/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-07-18 13:49:42
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, A14, A15, A16, A17, A18, A19, A20, A21, };

int inferenceTPG() {
	enum vertices currentVertex = T13;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A14, A18, A14,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[4] = { T0, A17, A18, A14,  };

			double T1Scores[4];

			T1Scores[0] = P3();
			T1Scores[1] = P4();
			T1Scores[2] = P5();
			T1Scores[3] = P6();

			int best = bestProgram(T1Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[7] = { A15, A14, A14, A20, A19, A17, A18,  };

			double T2Scores[7];

			T2Scores[0] = P7();
			T2Scores[1] = P2();
			T2Scores[2] = P8();
			T2Scores[3] = P9();
			T2Scores[4] = P10();
			T2Scores[5] = P11();
			T2Scores[6] = P12();

			int best = bestProgram(T2Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { A17, T1,  };

			double T3Scores[2];

			T3Scores[0] = P13();
			T3Scores[1] = P14();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[7] = { A15, A15, A14, A15, T2, A17, A18,  };

			double T4Scores[7];

			T4Scores[0] = P15();
			T4Scores[1] = P16();
			T4Scores[2] = P17();
			T4Scores[3] = P18();
			T4Scores[4] = P19();
			T4Scores[5] = P20();
			T4Scores[6] = P21();

			int best = bestProgram(T4Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { A18, T4,  };

			double T5Scores[2];

			T5Scores[0] = P22();
			T5Scores[1] = P23();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T4, T5, T3,  };

			double T6Scores[3];

			T6Scores[0] = P23();
			T6Scores[1] = P24();
			T6Scores[2] = P25();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[8] = { A19, A15, A14, A15, T4, A17, A18, T2,  };

			double T7Scores[8];

			T7Scores[0] = P26();
			T7Scores[1] = P27();
			T7Scores[2] = P17();
			T7Scores[3] = P28();
			T7Scores[4] = P29();
			T7Scores[5] = P30();
			T7Scores[6] = P21();
			T7Scores[7] = P31();

			int best = bestProgram(T7Scores, 8);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T2, T3, T7, A14,  };

			double T8Scores[4];

			T8Scores[0] = P32();
			T8Scores[1] = P33();
			T8Scores[2] = P34();
			T8Scores[3] = P0();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T8, A21,  };

			double T9Scores[2];

			T9Scores[0] = P35();
			T9Scores[1] = P36();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T8, A17,  };

			double T10Scores[2];

			T10Scores[0] = P37();
			T10Scores[1] = P11();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[2] = { T9, T2,  };

			double T11Scores[2];

			T11Scores[0] = P38();
			T11Scores[1] = P39();

			int best = bestProgram(T11Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[3] = { T11, A16, T10,  };

			double T12Scores[3];

			T12Scores[0] = P40();
			T12Scores[1] = P41();
			T12Scores[2] = P42();

			int best = bestProgram(T12Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { A20, A16, T12, T6,  };

			double T13Scores[4];

			T13Scores[0] = P43();
			T13Scores[1] = P41();
			T13Scores[2] = P44();
			T13Scores[3] = P45();

			int best = bestProgram(T13Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A14: {
			return 1;
			break;
		}
		case A15: {
			return 7;
			break;
		}
		case A16: {
			return 4;
			break;
		}
		case A17: {
			return 0;
			break;
		}
		case A18: {
			return 3;
			break;
		}
		case A19: {
			return 2;
			break;
		}
		case A20: {
			return 5;
			break;
		}
		case A21: {
			return 6;
			break;
		}
		}
	}
}
