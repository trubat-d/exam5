#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}
TargetGenerator::TargetGenerator(const TargetGenerator & ref) {*this=ref;}
TargetGenerator & TargetGenerator::operator=(const TargetGenerator & ref) { this->save = ref.save;return *this;}
void TargetGenerator::learnTargetType(ATarget * target) 
{
    this->save[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(string const & target) 
{
    if(this->save.find(target) != this->save.end())
        this->save.erase(target);
}

ATarget* TargetGenerator::createTarget(string const & target) 
{
    if(this->save.find(target) != this->save.end())
    {
        return this->save[target]->clone();
    }
    return NULL;
}