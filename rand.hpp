#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <iomanip>
#include <sstream>
#include <time.h>
#include <unistd.h>

class Rand : public Base {
    public:
        Rand() {
            operand = rand() % 100;
        }
        Rand(int seed) { 
            srand(seed);
            operand = rand() % 100;
        };
        virtual double evaluate() { return operand; }
        virtual std::string stringify() {
            std::ostringstream ss;
            ss << std::fixed << std::setprecision(1) << operand;
            return ss.str();
        }
    private:
        double operand = 0;
};

#endif //__RAND_HPP__
