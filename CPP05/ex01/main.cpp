# include "Bureaucrat.hpp"
# include "Form.hpp"

void    everythingFine()
{
    std::cout << "------- EVERYTHING FINE -------" << std::endl;
    try
    {
        Bureaucrat johndoe("Asterix", 1);
        Form        form("Laissez-Passer A38", 20, 20);
        std::cout << johndoe;
        std::cout << form;
        johndoe.signForm(form);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void gradeToLow(){
    std::cout << "\n\n------- Grade Too Low to Sign -------" << std::endl;
    try
    {
        Bureaucrat johndoe("Asterix", 21);
        Form        form("Laissez-Passer A38", 20, 20);
        std::cout << johndoe;
        std::cout << form;
        johndoe.signForm(form);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}


void exceptionTooLow(){
    std::cout << "\n\n------- Grade Too Low Exception -------" << std::endl;
    try
    {
        Bureaucrat johndoe("Asterix", 21);
        Form        form("Laissez-Passer A38", 20, 20);
        std::cout << johndoe;
        std::cout << form;
        form.beSigned(johndoe);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
   everythingFine();
   gradeToLow();
   exceptionTooLow();

    return (0);
}