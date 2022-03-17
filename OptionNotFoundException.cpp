#include "OptionNotFoundException.h"

OptionNotFoundException::OptionNotFoundException(std::string key) {
    key = key;
}

const char *OptionNotFoundException::what() const throw() {
    return key.c_str();
}
