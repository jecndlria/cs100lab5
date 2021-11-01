#ifndef __ADD_HPP__
#define __ADD_HPP__
#include "base.hpp"
#include "op.hpp"
#include <string>
class Add : public Base 
{
    private:
        Op* lhs;
        Op* rhs;
    public:
        Add(Op* lhs, Op* rhs) { this->lhs = lhs; this->rhs = rhs; }
        virtual double evaluate() { return lhs->evaluate() + rhs->evaluate(); }
        virtual std::string stringify() { return std::to_string(lhs->evaluate()) + " + " + std::to_string(rhs->evaluate()); }
};

#endif