#include "CmdOption.h"

CmdOption::CmdOption(int key, int description, bool required) {
    this->key = key;
    this->description = description;
    this->required = required;
}

CmdOption::CmdOption() {
    key = "";
    description = "";
    required = false;
}