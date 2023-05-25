/**
 * Project Untitled
 */

#include "Application.h"

 /**
  * Application implementation
  */


  /**
   * @return Application
   */
Application::Application(string companyName, int businessNumber, string part, string deadline) {
    this->companyName = companyName;
    this->businessNumber = businessNumber;
    this->part = part;
    this->deadline = deadline;
    this->numOfApplicants += 1;
}

void Application::getApplicationDetails() {
    cout << "4 3 " << companyName << part << numOfApplicants << deadline << endl;
    return;
}

void Application::cancelApplication() {
    this->cancel = true;
    return;
}