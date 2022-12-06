#ifndef DOG_HPP

# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& rhs);
		Dog& operator=(const Dog& rhs);
		~Dog();
	
	public:
		void makeSound() const;
		const std::string GetIdea(const int index) const;
		void SetIdea(std::string& idea, int index);

	private:
		Brain *brain_;
};

#endif