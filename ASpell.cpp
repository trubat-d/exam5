#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(const string & name, const string & effects) : name(name), effects(effects) {}
ASpell::~ASpell() {}
ASpell::ASpell(const ASpell & ref) {this->name = ref.name; this->effects = ref.effects;}
ASpell &ASpell::operator=(const ASpell & ref) {this->name = ref.name; this->effects = ref.effects; return *this;}
string ASpell::getName() const {return this->name;}
string ASpell::getEffects() const {return this->effects;}
void ASpell::launch(const ATarget & target) {target.getHitBySpell(*this);}