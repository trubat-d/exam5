#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(const string & type) : type(type) {}
ATarget::~ATarget() {}
ATarget::ATarget(const ATarget & ref) {this->type = ref.type;}
ATarget &ATarget::operator=(const ATarget&ref) {this->type = ref.type; return *this;}
string ATarget::getType() const {return this->type;};
void ATarget::getHitBySpell(const ASpell &spell) const {cout << this->getType() << " has been " << spell.getEffects() << "!" << endl;}