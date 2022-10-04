# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShruberryCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

void    test1(){
    std::cout /* code */<< std::endl;
    std::cout << "\033[1;35m////////////////TEST1 🧪//////////////\033[0m" << std::endl;
    try
    {
    Bureaucrat bob("Bob", 1);
    ShruberryCreationForm shrub("shrub");
    std::cout << bob;
    std::cout << shrub;
    bob.signForm(shrub);
    std::cout << shrub;
    shrub.execute(bob);
    bob.executeForm(shrub);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test2(){
    std::cout << std::endl;
    std::cout << "\033[1;35m////////////////TEST2 🧪//////////////\033[0m" << std::endl;
      try
    {
    Bureaucrat bob("Bob", 146);
    ShruberryCreationForm shrub("shrub");
    std::cout << bob;
    std::cout << shrub;
    bob.signForm(shrub);
    std::cout << shrub;
    shrub.execute(bob);
    bob.executeForm(shrub);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
 
void test3(){
    std::cout << std::endl;
    std::cout << "\033[1;35m////////////////TEST3 🧪//////////////\033[0m" << std::endl;
     try
    {
    Bureaucrat bob("Bob", 1);
    RobotomyRequestForm robot("shrub");
    std::cout << bob;
    std::cout << robot;
    bob.signForm(robot);
    std::cout << robot;
    robot.execute(bob);
    bob.executeForm(robot);
       robot.execute(bob);
    bob.executeForm(robot);
       robot.execute(bob);
    bob.executeForm(robot);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test4(){
    std::cout << std::endl;
    std::cout << "\033[1;35m////////////////TEST4 🧪//////////////\033[0m" << std::endl;
     try
    {
    Bureaucrat bob("Bob", 47);
    RobotomyRequestForm robot("shrub");
    std::cout << bob;
    std::cout << robot;
    bob.signForm(robot);
    std::cout << robot;
    robot.execute(bob);
    bob.executeForm(robot);
    robot.execute(bob);
    bob.executeForm(robot);
    robot.execute(bob);
    bob.executeForm(robot);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test5(){
    std::cout << std::endl;
    std::cout << "\033[1;35m////////////////TEST4 🧪//////////////\033[0m" << std::endl;
     try
    {
        Bureaucrat bob("Bob", 47);
        PresidentialPardonForm president("shrub");
        std::cout << bob;
        std::cout << president;
        bob.signForm(president);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test6(){
    std::cout << std::endl;
    std::cout << "\033[1;35m////////////////TEST4 🧪//////////////\033[0m" << std::endl;
     try
    {
    Bureaucrat bob("Bob", 4);
    PresidentialPardonForm president("shrub");
    std::cout << bob;
    std::cout << president;
    bob.signForm(president);
    std::cout << president;
    president.execute(bob);
    bob.executeForm(president);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    test1();
   test2();
   test3();
   test4();
   test5();
   test6();

    return (0);
}