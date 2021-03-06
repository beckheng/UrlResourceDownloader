#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebKit/QWebElement>
#include <QtWebKit/QtWebKit>
#include <QtWebKitWidgets/QWebPage>

#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_open_clicked();

    void on_webView_loadProgress(int progress);

    void on_webView_loadFinished(bool arg1);

    void replyFinished(QNetworkReply *reply);

    void on_chooseDir_clicked();

    void on_viewDir_clicked();

private:
    Ui::MainWindow *ui;

    QWebPage *webPage;

    QNetworkAccessManager *manager;
    QNetworkDiskCache *diskCache;
};

#endif // MAINWINDOW_H
