#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <iomanip>
#include <sstream>

class Op : public Base {
    public:
        double operand = 0;
        Op(double value) : operand(value){ };
        virtual double evaluate() { return operand; }
        virtual std::string stringify() {
            std::stringstream ss;
            return std::to_string(operand);
        }
};

#endif //__OP_HPP__
