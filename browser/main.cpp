#include <QApplication>
#include <QWebView>
#include <QTimer>

int main(int argc, char *argv[])
{
    if (argc < 2)
        return EXIT_FAILURE;

    QApplication a(argc, argv);
    QWebView view;
    QTimer::singleShot(60000 * 3, &a, &QApplication::quit);

    view.show();
    view.load(QUrl(argv[1]));

    return a.exec();
}
