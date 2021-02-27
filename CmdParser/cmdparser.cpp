#include "cmdparser.h"

struct CmdParser::ArgParameter{
public:
    /*!
     Just our argument storing in string form
     */
    std::string arg;
    /*!
     Define index of our argument in general store.
     For example -h - has index 0, by default(can be changed).
     */
    int arg_index;

    std::vector<std::string> parameters;

    /*!
     Index of our arg can be defined outside struct or inside it
     */
    ArgParameter(const std::string &arg, const int &arg_index, const std::vector<std::string> &parameters);
    ArgParameter(const std::string &arg, const std::vector<std::string> &parameters);
};

CmdParser::CmdParser(const bool &use_default)
{

}

const std::vector<std::string> &CmdParser::GetParamater(const int &order_index) const
{
    return command.at(order_index).parameters;
}

const std::vector<std::string> &CmdParser::GetParamater(const std::string &arg) const
{
    for(uint i = 0; i < command.size(); i++)
        if(command.at(i).arg == arg)
            return command.at(i).parameters;
    return {};
}
