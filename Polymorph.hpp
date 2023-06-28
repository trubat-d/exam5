#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
using namespace std;

class Polymorph : public ASpell
{
public:
    Polymorph();
    ~Polymorph();
    Polymorph(const Polymorph & ref);
    Polymorph&operator=(const Polymorph & ref);
    Polymorph *clone() const;
};

#endif