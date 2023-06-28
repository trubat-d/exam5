#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
using namespace std;

class Fireball : public ASpell
{
public:
    Fireball();
    ~Fireball();
    Fireball(const Fireball & ref);
    Fireball&operator=(const Fireball & ref);
    Fireball *clone() const;
};

#endif