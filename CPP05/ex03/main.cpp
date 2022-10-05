# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShruberryCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;

        AForm* rrg;
        rrg = someRandomIntern.makeForm("presidential pardon", "Julian Asange");
        std::cout << *rrg << std::endl;

        AForm* rrh;
        rrh = someRandomIntern.makeForm("shruberry creation", "Amazonia");
        std::cout << *rrh << std::endl;

        Bureaucrat macron("Macron", 1);
        macron.signForm(*rrh);
        macron.executeForm(*rrh);

        for (int i = 0; i < 100; i++)
            macron.downGrade();
        try
        {
            macron.signForm(*rrg);
        }
        catch (std::exception & e)
        {
            std::cout << e.what();
        }
        macron.executeForm(*rrg);

        delete (rrh);
        delete (rrf);
        delete (rrg);
    }

    return (0);
} 