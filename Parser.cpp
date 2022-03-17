#include "Parser.h"

Parser::Parser(int &argc, char **argv) {
    for (int i = 1; i < argc; ++i) {
        this->tokens.emplace_back(std::string(argv[i]));
    }
}

void Parser::initOptions(std::list<CmdOption> options) {
    this->options = options;
}

void Parser::getConsoleHelp() {
    for (auto iter : options) {
        std::cout
                << "parameter: " << iter.key << std::endl
                << "description: " << iter.description << std::endl;
    }
}

const std::string& Parser::getCmdOption(const std::string &option) const {
    std::vector<std::string>::const_iterator itr;
    itr = std::find(this->tokens.begin(), this->tokens.end(), option);

    if (itr != this->tokens.end() && ++itr != this->tokens.end()) {
        return *itr;
    }
    static const std::string empty_string("");
    return empty_string;
}

const bool Parser::cmdOptionExists(const std::string &option) const {
    return std::find(this->tokens.begin(), this->tokens.end(), option)
           != this->tokens.end();
}

const std::map<std::string, std::string> Parser::getAllParameters() const {
    std::map<std::string, std::string> map = std::map<std::string, std::string>();

    for (auto iter : options) {
        if (iter.required && !cmdOptionExists(iter.key)) {
            throw OptionNotFoundException(iter.key);
        }


        map[iter.key] = getCmdOption(iter.key);
    }

    return map;
}