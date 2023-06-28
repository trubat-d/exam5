#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}
Polymorph::~Polymorph() {}
Polymorph::Polymorph(const Polymorph & ref) : ASpell(ref) {}
Polymorph & Polymorph::operator=(const Polymorph & ref) {this->name = ref.name; this->effects=ref.effects; return *this;}
Polymorph *Polymorph::clone() const {return new Polymorph();}