#ifndef MAP_H
#define MAP_H

#include <iostream>
using namespace std;

class gamemap{
    private:
        char tiletype = 'x';
    public:
        void printmap(){
            cout << "             ---------------------------" << endl;
            cout << "             |            |            |" << endl;
            cout << "             |  6.Master     7.Bathoom |" << endl;
            cout << "             |   Bedroom               |" << endl;
            cout << "             |            |            |" << endl;
            cout << "-------------------  -------------------" << endl;
            cout << "|            |            |            |" << endl;
            cout << "| 4.Library  |               5.Guest   |" << endl;
            cout << "|            |                 Room    |" << endl;
            cout << "|            |            |            |" << endl;
            cout << "------  ------   Hallway  --------------" << endl;
            cout << "|            |            |            |" << endl;
            cout << "| 2.Office                  3.Kitchen  |" << endl;
            cout << "|                                      |" << endl;
            cout << "|            |            |            |" << endl;
            cout << "-------------------  -------------------" << endl;
            cout << "             |            |             " << endl;
            cout << "             |  1.Foyer   |             " << endl;
            cout << "             |            |             " << endl;
            cout << "             |            |             " << endl;
            cout << "             -----|  |-----             " << endl;
        }

};

#endif