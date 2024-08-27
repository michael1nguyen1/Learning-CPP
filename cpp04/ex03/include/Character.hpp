#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string);
		Character(const Character&);
		Character& operator=(const Character&);

		~Character() override;
		std::string const & getName() const override;
		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;
	
	private:
		std::string name;
		AMateria* inventory[4];
		AMateria* floor[100];
};

#endif