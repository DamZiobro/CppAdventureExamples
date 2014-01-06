/*
 * =====================================================================================
 *       Filename:  boost_sharedPointer.cpp
 *    Description:  
 *        Created:  2013-12-13 15:24 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <boost/program_options.hpp>

using namespace std;
using namespace boost;

namespace po = boost::program_options;

/* ======= Function ==================================================
 *   Name: parseProgramOptions
 *   Description: Parsing program options
 * =================================================================== 
 */
void parseProgramOptions(int argc, const char** argv)
{
    //I - declaration of basic options
    po::options_description basicOptions("Basic options");
    basicOptions.add_options() 
        ("help", "produce help message")
        ("intOption,i", po::value<int>(), "set int value option")
        ("stringOption,s", po::value<string>(), "set string value option");

    //Ia - add another source of options 
    po::options_description advancedOptions("Advanced options");
    advancedOptions.add_options()
        ("doubleOption,d", po::value<double>(), "set double value option");


    //Ib - compose command line options baseing on two sets of options 
    po::options_description allOptions;
    allOptions.add(basicOptions).add(advancedOptions);

    //II - parse options of application
    po::variables_map optionsMap;
    try {
        po::store(po::parse_command_line(argc, argv, allOptions), optionsMap);
        po::notify(optionsMap);
    } catch (po::unknown_option& exceptionObject) {
        //Exception in parsing command line options
        cout << "====> ERROR: " << exceptionObject.what() << endl;
        cout << allOptions << endl;
    }

    //III - dealing with parsed options
    if(optionsMap.count("help")){
        cout << allOptions << endl;
    }
    if(optionsMap.count("intOption")){
        cout << "intOption set to: " << optionsMap["intOption"].as<int>() << endl; 
    }
    if(optionsMap.count("stringOption")){
        cout << "stringOption set to: " << optionsMap["stringOption"].as<string>() << endl; 
    }
    if(optionsMap.count("doubleOption")){
        cout << "doubleOption set to: " << optionsMap["doubleOption"].as<double>() << endl; 
    }
}

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    parseProgramOptions(argc, argv);
    return 0;
}


