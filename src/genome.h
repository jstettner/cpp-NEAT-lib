#ifndef _GENOME
#define _GENOME
#include "gene.h"

namespace NEAT {
	class Genome {
	public:
		int input_dim, output_dim;
		Gene *composition[];
		Genome(int, int);
	};
}

#endif
