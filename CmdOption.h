#ifndef COMMAND_LINE_ARGUMENTS_PARSER_CMDOPTION_H
#define COMMAND_LINE_ARGUMENTS_PARSER_CMDOPTION_H

class CmdOption {
public:
    std::string key;
    std::string description;
    bool required;

    CmdOption(std::string key, std::string description, bool required = false);
    CmdOption();
};

#endif //COMMAND_LINE_ARGUMENTS_PARSER_CMDOPTION_H
