#include <QPushButton>
#include <QApplication>

int main(int argc, char *argv[])
{
    //Point I
    QApplication application(argc, argv);

    //Point II
    QPushButton* button = new QPushButton("Hello world");

    //Point III
    QObject::connect(button,SIGNAL(clicked()), &application, SLOT(quit()));

    //Point IV
    button->show();
    
    //Point V
    int result = application.exec();
    
    delete button;
    button = NULL;

    return result;
}
