#ifndef COMMAND_LINE_ARGUMENTS_PARSER_PARSER_H
#define COMMAND_LINE_ARGUMENTS_PARSER_PARSER_H

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include "Parser.h"
#include "CmdOption.h"
#include "OptionNotFoundException.h"

class Parser {
private:
    std::vector <std::string> tokens;
    std::list <CmdOption> options;

public:
    Parser(int& argc, char** argv);
    void initOptions(std::list<CmdOption> options);
    void getConsoleHelp();
    const std::string& getCmdOption(const std::string& option) const;
    const bool cmdOptionExists(const std::string& option) const;
    const std::map<std::string, std::string> getAllParameters() const;
};

#endif //COMMAND_LINE_ARGUMENTS_PARSER_PARSER_H
