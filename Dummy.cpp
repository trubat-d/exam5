#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {};
Dummy::~Dummy() {};
Dummy::Dummy(const Dummy & ref) : ATarget(ref) {};
Dummy &Dummy::operator=(const Dummy & ref) {this->type = ref.type; return *this;};
Dummy *Dummy::clone() const {return new Dummy();};