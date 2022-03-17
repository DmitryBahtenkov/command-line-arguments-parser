#ifndef COMMAND_LINE_ARGUMENTS_PARSER_OPTIONNOTFOUNDEXCEPTION_H
#define COMMAND_LINE_ARGUMENTS_PARSER_OPTIONNOTFOUNDEXCEPTION_H

#include <string>

class OptionNotFoundException {
private:
    std::string key;

public:
    OptionNotFoundException(std::string key);
    virtual const char* what() const throw();
};

#endif //COMMAND_LINE_ARGUMENTS_PARSER_OPTIONNOTFOUNDEXCEPTION_H
