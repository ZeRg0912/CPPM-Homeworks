#pragma once
#include <stdexcept>

class badFigureException : public std::domain_error
{
public:
    using domain_error::domain_error;
};