#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default_taget")
{
	std::cout << "\e[0;35mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "\e[0;35mFields Constructor called of ShrubberyCreationForm\e[0m" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy)
{
	_target = copy.getTarget();
	std::cout << "\e[0;35mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;35mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& assign)
{
	_target = assign.getTarget();
	return (*this);
}

const std::string& ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	try {
	    isValid(executor);
        draw_asciitree();
    } catch (const std::exception& e) {
        throw ;
    }
}

void    ShrubberyCreationForm::draw_asciitree() const {
    std::string file_name = getTarget() + "_shrubbery";
    std::ofstream out_file(file_name.c_str());
    out_file <<	"     ccee88oo\n"
                "  C8O8O8Q8PoOb o8oo\n"
                " dOB69QO8PdUOpugoO9bD\n"
                "CgggbU8OU qOp qOdoUOdcb\n"
                "    6OuU  /p u gcoUodpP\n"
                "      \\\\//  /douUP\n"
                "        \\\\////\n"
                "         |||/\\\n"
                "         |||\\/ \n"
                "         |||||\n"
                "   .....//||||\\....\n"
                << std::endl;
    out_file.close();
}
