# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShruberryCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
    {
        srand(time(NULL));

        Intern someRandomIntern;
        AForm* rrf = NULL;
        rrf = someRandomIntern.makeForm("robtomy request", "Bender");
        if (rrf)
            std::cout << *rrf << std::endl;

        AForm* rrg = NULL;
        rrg = someRandomIntern.makeForm("presidential pardon", "Julian Asange");
        if (rrg)
            std::cout << *rrg << std::endl;

        AForm* rrh = NULL;
        rrh = someRandomIntern.makeForm("shruberry creation", "Amazonia");
        if (rrh)
            std::cout << *rrh << std::endl;

        Bureaucrat macron("Macron", 1);
        macron.signForm(*rrh);
        macron.executeForm(*rrh);
        macron.signForm(*rrh);
        std::cout << std::endl << std::endl;

        for (int i = 0; i < 100; i++)
            macron.downGrade();
        macron.signForm(*rrg);
        macron.executeForm(*rrg);

        delete (rrh);
        delete (rrf);
        delete (rrg);
    }

    return (0);
} 