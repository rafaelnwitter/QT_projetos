#include <QApplication>
#include <QLabel>
int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello World");
    label->setWindowTitle("Meu APP");
    label->resize(200,100);
    label->show();
    return app.exec();
}
