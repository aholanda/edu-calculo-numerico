#ifndef __NUMCALC_H__
#define __NUMCALC_H__

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "zero.h"

#define ERROR(...) do {\
		fprintf(stderr, "ERROR: %s.%d: ", \
			__FILE__, __LINE__); \
	       	fprintf(stderr, __VA_ARGS__); \
		exit(1); \
	} while(0)

#endif
