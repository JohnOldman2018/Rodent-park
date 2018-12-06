#include <QCoreApplication>
#include <QDebug>

#include "rodent.h"

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    qDebug() << "Hail to the Rodent!";
    {
        Rodent hamster("Sam");
        hamster.lifeDay();
        hamster.getInfo();
        hamster.lifeDay();
 //       hamster.addCheese(); // Если в клетку добавить сыр.
        hamster.lifeDay();
        hamster.getInfo();
        qDebug()<< "Trying to feed the rodent with 5.6 gm.";
        hamster.feed(5.6);
        hamster.getInfo();
        hamster.lifeDay();
        hamster.getInfo();
        hamster.lifeDay();
        hamster.getInfo();
        hamster.lifeDay();
        hamster.getInfo();
        //hamster.weight = 152.0;
        //qDebug()<<  "new Ham weigth: " <<  hamster.weight;
    }
    {
        Hamster little("Dan");
        little.lifeDay();
        little.getInfo();
        little.lifeDay();
 //       little.addCheese(); // Если в клетку добавить сыр.
        little.lifeDay();
        little.getInfo();
 //       qDebug()<< "Trying to feed the rodent with 5.6 gm.";
 //       little.feed(5.6);
        little.getInfo();
        little.lifeDay();
        little.getInfo();
        little.lifeDay();
        little.getInfo();
        little.lifeDay();
        little.getInfo();
    }
 {   Rat little("The Stainless Steel Rat");
        int age = 0;
        do {
    little.lifeDay();
    age++;
    little.getInfo();
        } while (age<500);
   /* little.lifeDay();
       little.addCheese(); // Если в клетку добавить сыр.
    little.lifeDay();
    little.getInfo();
       qDebug()<< "Trying to feed the rodent with 5.6 gm.";
       little.feed(5.6);
    little.getInfo();
    little.lifeDay();
    little.getInfo();
    little.lifeDay();
    little.getInfo();
    little.lifeDay();
    little.getInfo();*/
}
    Rodent mouse("Mous");
    qDebug()<< mouse.getName();

    {
        Mouse m1("New Mouse");
        qDebug()<< m1.getName();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.addCheese();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.addCheese();
//        qDebug()<< "Trying to feed m1 with 5.6 gm.";
//        m1.feed(5.6);

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.addCheese();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

    }

    return a.exec();
}
