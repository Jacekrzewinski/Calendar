#ifndef Event_hpp
#define Event_hpp
#include <iostream>
class Event
{
std::string date;
std::string start_time;
std::string end_time;
public:
Event();
Event(Event &);
void date_change_request(std::string);
void start_time_change_request(std::string);
void end_time_change_request(std::string);
void set_date(std::string);
void set_start_time(std::string);
void set_end_time(std::string);
};
#endif