#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
using namespace std;

class SpellBook
{
private:
    map<string, ASpell *> save;
    SpellBook(const SpellBook & ref);
    SpellBook&operator=(const SpellBook & ref);
public:
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell *);
    void forgetSpell(string const &ref);
    ASpell* createSpell(string const &ref);
};

#endif