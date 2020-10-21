#include "node.h"
#include "gene.h"

using namespace NEAT;

Gene::Gene(Node *u, Node *v, int inn_num, int w, bool e)
	: u(u)
	, v(v)
	, innovation_number(inn_num)
	, weight(w)
	, enabled(e) {}
