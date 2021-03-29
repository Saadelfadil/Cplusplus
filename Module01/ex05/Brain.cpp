#include "Brain.hpp"

Brain::Brain()
{
    
}

std::string Brain::identifier() const{
    std::stringstream tmp;

	tmp << this;
	return (tmp.str());
}