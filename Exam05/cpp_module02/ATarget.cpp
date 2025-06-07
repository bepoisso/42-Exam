#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(std::string newType) : _type(newType) {
}

ATarget::ATarget(const ATarget & src) : _type(src._type) {
}

const ATarget & ATarget::operator=(const ATarget & rhs) {
    if (this != &rhs)
    {
        _type = rhs._type;
    }

    return *this;
}

ATarget::~ATarget() {}


const std::string & ATarget::getType(void) const {
    return _type;
}

void ATarget::getHitBySpell(const ASpell & spell) const {
    std::cout << _type << " has been " << spell.getEffects()<< "!" << std::endl;
}
