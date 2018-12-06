#include "rodent.h"
#include <QString>

Rodent::Rodent(QString name)
{
    QString qsTemp = "New rodent %1 was born! Natal weigh is %2";
    qDebug() << qsTemp.arg(name).arg(this->weight);
    this->name = name;
}
Rodent::Rodent()
{
    QString qsTemp = "Empty constructor: New rodent was born! Weight is %1";
    qDebug() << qsTemp.arg(this->weight);
    this->name = name;
}
Rodent::~Rodent()
{
    QString qsTemp = "Rodent %1 has died prematurely! :( RIP! Postmortem weight is %2";
    qDebug() << qsTemp.arg(name).arg(this->weight);
}

void Rodent::feed(double food)
{
    if (food >= weight){
        qDebug() << "Your rodent cannot assimilate this amount of food!";
        food = weight;}
    weight+=food; // Rodents assimilate only half of the food you feed them.
}

bool Rodent::lifeDay()
{
    weight -= 0.20 + 0.05 * weight;
    age++;
    if(weight<=0.00){
        qDebug() << "Your rodent died of starving!!!"; return false;
    }
    if(age>=maxLifeSpan){
        qDebug() << "Your rodent died of old age! It will always stay in our hearts!"; return false;
    }
    return true;
}

QString Rodent::getInfo() {
    QString qsTemp = "Info on %1: age is %2, weight is %3 and expected life is %4 days";
    qDebug() << (QString)qsTemp.arg(name).arg(age).arg(weight).arg(maxLifeSpan);
    return qsTemp;
}

void Rodent::addCheese() {
    weight+=0.5;
    qDebug() << "Your rodent found cheese" << endl;
}

Mouse::Mouse(QString name)
{
    weight=0.75;
    QString qsTemp = "New Mouse %1 was born! Weigh is %2";
    qDebug() << qsTemp.arg(name).arg(weight);
    this->name = name;
}
/*
bool Mouse::lifeDay()
{
    weight-=0.25;
    age++;
    if(weight<=0.00){
        qDebug() << "Your rodent died of starving!!!"; return false;
    }
    if(age>=maxLifeSpan){
        qDebug() << "Your rodent died of old age! It will always stay in our hearts!"; return false;
    }
    return true;
}*/
Hamster::Hamster(QString name)
{
    weight=1.75;
    QString qsTemp = "New hamster %1 was born! Weigh is %2";
    qDebug() << qsTemp.arg(name).arg(weight);
    this->name = name;
}
/*
bool Hamster::lifeDay()
{
    weight-=0.45;
    age++;
    if(weight<=0.00){
        qDebug() << "Your rodent died of starving!!!"; return false;
    }
    if(age>=maxLifeSpan){
        qDebug() << "Your rodent died of old age! It will always stay in our hearts!"; return false;
    }
    return true;
}*/
Rat::Rat(QString name)
{
    weight=5.0;
    QString qsTemp = "New rat %1 was born! Weigh is %2";
    qDebug() << qsTemp.arg(name).arg(weight);
    this->name = name;
}
