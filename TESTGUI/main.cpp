#include <QApplication>
#include "unit/loginScreenTestGUI.cpp"
#include "unit/homeScreenTestGUI.cpp"

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);

    LoginScreenTestGUI testLogin;
    int teste1 = QTest::qExec(&testLogin);

    HomeScreenTestGUI testHome;
    int teste = QTest::qExec(&testHome);

    cout << teste1 << ", " << teste << endl;

    return 0;
}
