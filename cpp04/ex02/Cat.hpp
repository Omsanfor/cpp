#ifndef CAT_HPP

# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat& rhs);
		Cat& operator=(const Cat& rhs);
		
	public:
		void makeSound() const;
		const std::string GetIdea(const int index) const;
		void SetIdea(std::string& idea, int index);
	
	private:
		Brain *brain_;

};
#endif