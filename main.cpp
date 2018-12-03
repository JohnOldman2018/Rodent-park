#include <QCoreApplication>
#include <QDebug>

#include "rodent.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Heeelo all Rodent";
    {
        Rodent hamster("Ham");
        qDebug()<< "Ham name : " << hamster.getName();
        qDebug()<< "Ham weigth: " <<  hamster.getWeight();

        hamster.lifeDay();
        qDebug()<< "Ham weigth: " <<  hamster.getWeight();

        qDebug()<< "Ham's info: " <<  hamster.getInfo();

        hamster.lifeDay();
        qDebug()<< "Ham weigth: " <<  hamster.getWeight();

     //   hamster.addTwoGrams();

        hamster.lifeDay();
        qDebug()<< "Ham weigth: " <<  hamster.getWeight();


//        qDebug()<< "Trying to feed Ham with 5.6 gm.";
//        hamster.feed(5.6);

        hamster.lifeDay();
        qDebug()<< "Ham weigth: " <<  hamster.getWeight();

        //hamster.weight = 152.0;
        //qDebug()<<  "new Ham weigth: " <<  hamster.weight;
    }
    Rodent mouse("Mous");
    qDebug()<< mouse.getName();

    {
        Mouse m1("New Mouse");
        qDebug()<< m1.getName();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.addTwoGrams();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.addTwoGrams();
//        qDebug()<< "Trying to feed m1 with 5.6 gm.";
//        m1.feed(5.6);

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.addTwoGrams();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

    }

    return a.exec();
}
