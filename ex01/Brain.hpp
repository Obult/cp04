#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain
{
public:
	Brain();
	Brain(const Brain& ref);
	Brain& operator=(const Brain& ref);
	~Brain();
	void setIdea(int index, std::string idea);
	std::string getIdea(int index);
private:
	std::string _ideas[100];
};

#endif
