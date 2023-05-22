/**
 * Project Untitled
 */


#ifndef _APPLICATION_H
#define _APPLICATION_H

class Application {
public: 
    
Application getApplicationDetails();
    
void cancelApplication();
private: 
    String companyName;
    String part;
    time_t deadline;
    bool cancel;
};

#endif //_APPLICATION_H