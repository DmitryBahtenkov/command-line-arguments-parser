#include "CmdOption.h"

CmdOption::CmdOption() {
    key = "";
    description = "";
    required = false;
}

CmdOption::CmdOption(std::string key, std::string description, bool required) {
    this->key = key;
    this->description = description;
    this->required = required;
}
