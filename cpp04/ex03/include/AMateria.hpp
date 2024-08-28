#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
class ICharacter;

class AMateria
{
	public:
		virtual ~AMateria();
		AMateria& operator=(const AMateria&);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		
	protected:
		AMateria(std::string const & type);
		AMateria();
		AMateria(const AMateria&);
		std::string type;
};


#endif