#ifndef CMDPARSER_H
#define CMDPARSER_H

#include "CmdParser_global.h"
#include <string>
#include <map>
#include <vector>

class CMDPARSER_EXPORT CmdParser
{
public:
    CmdParser(const bool &use_default = true);

    const std::vector<std::string> &GetParamater(const int &index);
    const std::vector<std::string> &GetParamater(const std::string &arg);
private:
    /*!
     Struct for parameter that from command line argument.
     Contains command and parameter for the command(optional)
     */
    struct ArgParameter;
    /*!
      Execution commands in the order they are in map.
     */
    std::vector<ArgParameter> command;
};

#endif // CMDPARSER_H
