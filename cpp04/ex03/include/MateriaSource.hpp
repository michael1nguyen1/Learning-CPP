#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource&);
		MateriaSource& operator=(const MateriaSource&);
		~MateriaSource();
		void learnMateria(AMateria*) override;
		AMateria* createMateria(std::string const & type) override;

	protected:
		AMateria *storage[4] = {nullptr};
};

#endif