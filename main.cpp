#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Aqui agrego una pequeña pregunta
    qDebug() << "Hola mundo";

    qDebug() << "Mais alguma coisa?";

    return a.exec();
}
