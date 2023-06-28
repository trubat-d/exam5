#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include <map>
#include "ATarget.hpp"
using namespace std;

class TargetGenerator
{
private:
    map<string, ATarget *> save;
    TargetGenerator&operator=(const TargetGenerator & ref);
    TargetGenerator(const TargetGenerator & ref);
public:
    TargetGenerator();
    ~TargetGenerator();
    void learnTargetType(ATarget * target);
    void forgetTargetType(string const & target);
    ATarget* createTarget(string const & target);
};

#endif