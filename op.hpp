#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <iomanip>
#include <sstream>

class Op : public Base {
    public:
        Op(double value) : operand(value){ };
        Op() : operand(0) {};
        virtual double evaluate() { return operand; }
        virtual std::string stringify() {
            double DELETE_ME;
            return std::to_string(operand);
        }
    private:
        double operand = 0;
};

#endif //__OP_HPP__
