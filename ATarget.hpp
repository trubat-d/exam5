#ifndef  ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
using namespace std;

class ASpell;

class ATarget
{
protected:
    string type;
public:
    ATarget();
    ATarget(const string & type);
    virtual ~ATarget();
    ATarget(const ATarget&ref);
    ATarget &operator=(const ATarget&ref);
    string getType() const;
    virtual ATarget *clone() const = 0;
    void getHitBySpell(const ASpell &spell) const;
};

#endif