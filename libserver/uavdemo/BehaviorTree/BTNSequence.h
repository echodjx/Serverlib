#pragma once
#include "BTNControl.h"


class BTNSequence : public  BTNControl {
public:
    BTNSequence() = default;
    void Execute() override {std::cout<<"BTNParallel";};
};