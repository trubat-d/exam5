#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {}
SpellBook::SpellBook(const SpellBook & ref) {*this=ref;}
SpellBook & SpellBook::operator=(const SpellBook & ref) {this->save = ref.save; return *this;}


void SpellBook::learnSpell(ASpell *spell)
{
    this->save[spell->getName()] = spell;
}

void SpellBook::forgetSpell(string const & name)
{
    if(this->save.find(name) != this->save.end())
        this->save.erase(name);
}

ASpell * SpellBook::createSpell(string const &name)
{
    if(this->save.find(name) != this->save.end())
    {
        return this->save[name]->clone();
    }
    return NULL;
}