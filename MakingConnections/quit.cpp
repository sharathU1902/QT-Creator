#include<QApplication>
#include<QPushButton>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QPushButton *button =new QPushButton("Quit");
    QObject::connect(button, SIGNAL(clicked()),
                     &app, SLOT(quit()));
    button->resize(100,100);
    button->show();
    return app.exec();
}
