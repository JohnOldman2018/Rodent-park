#ifndef RODENT_H
#define RODENT_H

#include <QDebug>
#include <QString>

class Rodent
{
protected:
    int maxLifeSpan = 1000; // in days
    double weight =1.0; //gramm
    // Maximum weigth is 250 gramm
    int age=0; //age in days
    QString name;
    QString species;

public:
    Rodent();
    Rodent(QString name); // Constructor
   ~Rodent(); // Destructor
    // get and set name
    QString getName() {return name;}
    void setName(QString newName) {name = newName;}

    double getWeight() {return weight;}

    void getInfo();
    // Add function - get Info, return QString with all information

    void feed(double food); // Feed rodent with some gramm of food
    bool lifeDay(); // spend one day of life, ferurn false is rodent die.
    void addCheese(); // leave cheese in the cage
};


class Mouse: public Rodent{
public:
    Mouse(QString name); // Constructor
    void addCheese(){weight += 1;}
//    bool lifeDay();
};
class Hamster: public Rodent{
public:
    Hamster(QString name); // Constructor
    void addCheese(){weight += 2;}
//    bool lifeDay();
};
class Rat: public Rodent{
public:
    Rat(QString name); // Constructor
    void addCheese(){weight += 3;}
//    bool lifeDay();
    int maxLifeSpan = 1800;
};
#endif // RODENT_H
