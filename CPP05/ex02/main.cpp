# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShruberryCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

void    ShruberryWorking(){
    std::cout << "\n\n************** SHRUBERRY TEST WORKING **************" << std::endl;
    try
    {
        Bureaucrat johnDoe("johnDoe", 1);
        ShruberryCreationForm berry("berry");
        std::cout << johnDoe;
        std::cout << berry;
        johnDoe.signForm(berry);
        std::cout << berry;
        berry.execute(johnDoe);
        johnDoe.executeForm(berry);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void ShruberryNotWorking(){
    std::cout << "\n\n************** SHRUBERRY TEST NOT-WORKING **************" << std::endl;
      try
    {
        Bureaucrat johnDoe("johnDoe", 146);
        ShruberryCreationForm berry("berry");
        std::cout << johnDoe;
        std::cout << berry;
        johnDoe.signForm(berry);
        std::cout << berry;
        berry.execute(johnDoe);
        johnDoe.executeForm(berry);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
 
void robotomizingWorking(){
    std::cout << "\n\n************** ROBOTOMIZING TEST WORKING **************" << std::endl;
     try
    {
        Bureaucrat johnDoe("johnDoe", 1);
        RobotomyRequestForm robot("berry");
        std::cout << johnDoe;
        std::cout << robot;
        johnDoe.signForm(robot);
        std::cout << robot;
        std::cout << std::endl;
        robot.execute(johnDoe);
        johnDoe.executeForm(robot);
        std::cout << std::endl;
        robot.execute(johnDoe);
        johnDoe.executeForm(robot);
        std::cout << std::endl;
        robot.execute(johnDoe);
        johnDoe.executeForm(robot);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void robotomizingNotWorking(){
    std::cout << "\n\n************** ROBOTOMIZING TEST NOT-WORKING **************" << std::endl;
     try
    {
        Bureaucrat jimmy("jimmy", 47);
        RobotomyRequestForm robot("berry");
        std::cout << jimmy;
        std::cout << robot;
        jimmy.signForm(robot);
        std::cout << robot;
        std::cout << std::endl;
        robot.execute(jimmy);
        jimmy.executeForm(robot);
        std::cout << std::endl;
        robot.execute(jimmy);
        jimmy.executeForm(robot);
        std::cout << std::endl;
        robot.execute(jimmy);
        jimmy.executeForm(robot);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void presidentNotWorking(){
    std::cout << "\n\n************** PRESIDENT TEST NOT-WORKING **************" << std::endl;
     try
    {
        Bureaucrat johnDoe("johnDoe", 47);
        PresidentialPardonForm president("berry");
        std::cout << johnDoe;
        std::cout << president;
        johnDoe.signForm(president);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void presidentWorking(){
    std::cout << "\n\n************** PRESIDENT TEST WORKING **************" << std::endl;
     try
    {
        Bureaucrat johnDoe("johnDoe", 4);
        PresidentialPardonForm president("berry");
        std::cout << johnDoe;
        std::cout << president;
        johnDoe.signForm(president);
        std::cout << president;
        president.execute(johnDoe);
        johnDoe.executeForm(president);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    srand(time(NULL));
    ShruberryWorking();
    ShruberryNotWorking();
    robotomizingWorking();
    robotomizingNotWorking();
    presidentWorking();
    presidentNotWorking();

    return (0);
}