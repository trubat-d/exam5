#ifndef BrickWall_HPP
#define BrickWall_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"
using namespace std;

class BrickWall : public ATarget
{
public:
    BrickWall();
    ~BrickWall();
    BrickWall(const BrickWall & ref);
    BrickWall &operator=(const BrickWall & ref);
    BrickWall *clone() const;
};

#endif