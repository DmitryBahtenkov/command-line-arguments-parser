cmake_minimum_required(VERSION 3.1)

project(ArgParser VERSION 0.0.1)

add_executable(parser main.cpp CmdOption.h OptionNotFoundException.h Parser.h CmdOption.cpp OptionNotFoundException.cpp Parser.cpp )

install(TARGETS parser DESTINATION bin)



