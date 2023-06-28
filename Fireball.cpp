#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}
Fireball::~Fireball() {}
Fireball::Fireball(const Fireball & ref) : ASpell(ref) {}
Fireball & Fireball::operator=(const Fireball & ref) {this->name = ref.name; this->effects=ref.effects; return *this;}
Fireball *Fireball::clone() const {return new Fireball();}