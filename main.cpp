#include <QCoreApplication>
#include <qdebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hello world" <<endl;
    return a.exec();
}
