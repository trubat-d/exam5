#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {};
Fwoosh::~Fwoosh() {};
Fwoosh::Fwoosh(const Fwoosh & ref) : ASpell(ref) {};
Fwoosh & Fwoosh::operator=(const Fwoosh & ref) {this->name = ref.name; this->effects=ref.effects; return *this;};
Fwoosh *Fwoosh::clone() const {return new Fwoosh();};