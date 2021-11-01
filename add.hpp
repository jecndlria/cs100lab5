#ifndef __ADD_HPP__
#define __ADD_HPP__
#include "base.hpp"
#include "op.hpp"
#include <string>
class Add : public Base 
{
    private:
        Op lhs;
        Op rhs;
    public:
        Add(Op lhs, Op rhs) : Base() { this->lhs = lhs; this->rhs = rhs; }
        virtual double evaluate() { return }
        virtual std::string stringify { return ""; }
};

#endif