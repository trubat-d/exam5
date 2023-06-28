#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"
using namespace std;

class Dummy : public ATarget
{
public:
    Dummy();
    ~Dummy();
    Dummy(const Dummy & ref);
    Dummy &operator=(const Dummy & ref);
    Dummy *clone() const;
};

#endif