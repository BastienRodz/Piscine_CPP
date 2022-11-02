#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T> //2nd arg is the arg needed by std::stack
class MutantStack : public std::stack<T>
{
	public:

		MutantStack(){};
		MutantStack( MutantStack const & src ){ *this = src; };
		~MutantStack(){};

		MutantStack &		operator=( MutantStack const & rhs )
		{
			if (this != rhs)
				this->c = rhs.c;
			returh (*this);
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin() { return (this->c.begin()); };
		iterator	end() { return (this->c.end()); };
};

#endif /* ***************************************************** MUTANTSTACK_H */