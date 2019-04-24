#include <iostream>
#include <boost/format.hpp>
#include <QApplication>
#include <QDebug>
#include <QtWidgets>

int main(int argc, char *argv[]) {
    unsigned int arr[5] = { 0x05, 0x04, 0xAA, 0x0F, 0x0D };

    std::cout << boost::format("%02X-%02X-%02X-%02X-%02X")
            % arr[0]
            % arr[1]
            % arr[2]
            % arr[3]
            % arr[4]
         << std::endl;

    std::cout << QT_VERSION_STR << std::endl;

    QApplication app(argc, argv);
    QWidget window;
    window.resize(1366, 768);
    window.show();
    window.setWindowTitle(
            QApplication::translate("toplevel", "Top-level widget"));
    std::cout << window.winId() << std::endl;
    std::cout << window.windowHandle() << std::endl;
    return app.exec();
}