

#pragma once
#include "iostream"
#include "Root.h"

using namespace std;

class Building:public Root{ //superclass 2
    public:
        virtual bool isOpen()=0;
        virtual string getName()=0;
        virtual void text()=0;
    
};
