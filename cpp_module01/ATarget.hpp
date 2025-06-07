#pragma once

#include <iostream>
#include <string>

#include "ASpell.hpp"

class ASpell;

class ATarget {
protected:
    std::string _type;
public:
    ATarget(std::string newType);
    ATarget(const ATarget & src);
    const ATarget & operator=(const ATarget & rhs);
    virtual ~ATarget();

    const std::string & getType(void) const;
    virtual ATarget* clone() const = 0;

    void getHitBySpell(const ASpell & spell) const;
};