#ifndef _GENE
#define _GENE

#include "node.h"

namespace NEAT {
	class Gene {
	public:
		Node *u;
		Node *v;
		int innovation_number;
		float weight;
		bool enabled;

		Gene(Node *, Node *, int, int, bool);
	};
}

#endif

