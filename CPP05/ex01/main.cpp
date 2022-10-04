# include "Bureaucrat.hpp"
# include "Form.hpp"

void    test1(){
    std::cout << "////////////////TEST1 🧪//////////////" << std::endl;
    try
    {
    Bureaucrat bob("Bob", 1);
    Form        form1("A1", 20, 20);
    std::cout << bob;
    std::cout << form1;
    bob.signForm(form1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test2(){
    std::cout << "////////////////TEST2 🧪//////////////" << std::endl;
    try{
     Bureaucrat bob("Joe", 21);
    Form        form1("A2", 20, 20);
    std::cout << bob;
    std::cout << form1;
    bob.signForm(form1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}


void test3(){
    std::cout << "////////////////TEST3 🧪//////////////" << std::endl;
    try{
    Bureaucrat bob("Joe", 0);
    Form        form1("A2", 20, 20);
    std::cout << bob;
    std::cout << form1;
    form1.beSigned(bob);
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

    return (0);
}