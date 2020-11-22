#include<QApplication>
#include<QLabel>
int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QLabel *label= new QLabel("<h2><i>Hello</i>"
                              "<font color=red>Qt!</font></h2>");
    label->setWindowTitle("My APP");
    label->resize(100,100);
    label->show();
    return app.exec();
}
