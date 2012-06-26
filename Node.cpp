#include <iostream>
#include "Node.h"

// ---------- GET NODE FREQUENCY ----------------------------------------------
double Node::getFrequency() { return frequency; }

// ---------- LEFNODE CONSTRUCTOR ---------------------------------------------
LeafNode::LeafNode(double f, char d) {
	frequency	= f;
	left		= NULL;
	right		= NULL;
	data		= d;
}

// ---------- BINDNODE CONSTRUCTOR --------------------------------------------
BindNode::BindNode(Node* l, Node* r) {
	frequency = (left->getFrequency() + right->getFrequency());
	left	= l;
	right	= r;
}

// ---------- BINDNODE DECONSTRUCTOR ------------------------------------------
BindNode::~BindNode() {
	delete left;
	delete right;
}