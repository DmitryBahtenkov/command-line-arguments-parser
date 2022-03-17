#include <iostream>
#include <list>
#include <map>
#include <CmdOption.h>
#include <OptionNotFoundException.h>
#include <Parser.h>

int main(int argc, char* argv[])
{
    CmdOption option1 = CmdOption("-f", "test 1", false);
    CmdOption option2 = CmdOption("-d", "test 2", true);
    std::list<CmdOption> options = std::list<CmdOption>();
    options.push_back(option1);
    options.push_back(option2);

    Parser parser = Parser(argc, argv);
    parser.initOptions(options);
    parser.getConsoleHelp();
    std::map<std::string, std::string> map = parser.getAllParameters();
}
