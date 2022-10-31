#pragma once
#include "iostream"
#include "Building.h"

using namespace std;


class TaxiCompany: public Building{  
    private:
        string company_name[4]={"Uber", "iTaxi", "Yandex", "14448"};
    public:
        int jr;
        string getName(){
                string name;
                jr= (rand() % 4) ;
                name=(company_name[jr]);
                return name;
            }
        bool isOpen(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        bool isFound(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        void text(){
            cout<<"Taxi company:    '"<<getName()<<"' has been contacted, we are looking for a driver.'\n";
            }
        void text_closed(){
            cout<<"Taxi Company:    'We are sorry to inform that our working hours are over, have a nice day!'\n";
        }
        void text_found(){
             cout<<"Taxi company:   'Driver is on his way.'\n";
        }
        void text_notfound(){
            cout<<"Taxi company:    'It seems we couldn't find a driver at the moment, try later.'\n";

        }
        void request_feedback(){
            cout<<"Taxi company:    'So that was it, please leave a feedback.'\n";
        }
            
   
};