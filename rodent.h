#ifndef RODENT_H
#define RODENT_H

#include <QDebug>
#include <QString>

class Rodent
{
     int maxLifeSpan = 1000; // in days
protected:
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

    QString getInfo() {
        qDebug() << "Its age is " << this->age;
        qDebug() << "Its weight is " << this->weight;
        qDebug() << "Its maxLifeSpan is " << this->maxLifeSpan;
    }

    // Add function - get Info, return QString with all information

    void feed(double food); // Feed rodent with some gramm of food
    bool lifeDay(); // spend one day of life, ferurn false is rodent die.
};


class Mouse: public Rodent{
public:
    Mouse(QString name); // Constructor
    void addTwoGrams();
    bool lifeDay();
};
class Hamster: public Rodent{
public:
    Hamster(QString name); // Constructor
    void addTwoGrams();
    bool lifeDay();
};
class Rat: public Rodent{
public:
    Rat(QString name); // Constructor
    void addTwoGrams();
    bool lifeDay();
    int maxLifeSpan = 1800;
};
#endif // RODENT_H
