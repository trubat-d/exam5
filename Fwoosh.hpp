#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
using namespace std;

class Fwoosh : public ASpell
{
public:
    Fwoosh();
    ~Fwoosh();
    Fwoosh(const Fwoosh & ref);
    Fwoosh&operator=(const Fwoosh & ref);
    Fwoosh *clone() const;
};

#endif