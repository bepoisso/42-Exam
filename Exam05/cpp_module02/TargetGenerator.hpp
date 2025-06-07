#pragma once

#include <iostream>
#include <string>
#include <map>

#include "ATarget.hpp"

class TargetGenerator {
private:
    std::map<std::string, ATarget*> _targetbook;

public:
    TargetGenerator();
    ~TargetGenerator(); // VOIR SI DELETE TOUT LE TARGETBOOK

    void learnTargetType(ATarget* target);
    void forgetTargetType(std::string const & type);
    ATarget* createTarget(std::string const & type);
};