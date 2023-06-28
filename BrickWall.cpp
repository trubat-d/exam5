#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}
BrickWall::~BrickWall() {}
BrickWall::BrickWall(const BrickWall & ref) : ATarget(ref) {}
BrickWall &BrickWall::operator=(const BrickWall & ref) {this->type = ref.type; return *this;}
BrickWall *BrickWall::clone() const {return new BrickWall();}