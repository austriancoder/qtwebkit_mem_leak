#include <QApplication>
#include <QWebView>

int main(int argc, char *argv[])
{
    if (argc < 2)
        return EXIT_FAILURE;

    QApplication a(argc, argv);
    QWebView view;
    view.show();
    view.load(QUrl(argv[1]));

    return a.exec();
}
