/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2013-12-30 15:29 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace std;
using namespace boost;

namespace dateTime = boost::gregorian;

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    //I - get today date
    dateTime::date today = dateTime::day_clock::universal_day();
    cout << "Today is : " << today << endl;

    //II - use months class object to forward by one month
    dateTime::months ms(1);
    cout << "In a 1 month there will be: " << today + ms << endl;

    //III - get date based on date as string
    dateTime::date myBirthdayDate = dateTime::date_from_iso_string("19870629");
    cout << "Your birthday is: " << myBirthdayDate << endl;

    //IV - calculate your age in dayse based on date_duration object
    dateTime::date_duration myAge = today - myBirthdayDate;
    cout << "My age is: " << myAge.days() << endl;

    //V - forward and backward days in time using day_iterator
    dateTime::day_iterator it(today);
    --it; //only preincrement operator overloaded (impossible to do it++)
    cout << "Yesterday was: " << *it << endl;
    ++it; ++it; //increasing 2 times because it points to ''yesterday'
    cout << "Tomorrow will be " << *it << endl;

    return 0;
}


