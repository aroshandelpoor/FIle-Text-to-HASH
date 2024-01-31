#ifndef MD5WINDOW_H
#define MD5WINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MD5Window;
}
QT_END_NAMESPACE

class MD5Window : public QMainWindow
{
    Q_OBJECT

public:
    MD5Window(QWidget *parent = nullptr);
    ~MD5Window();

private slots:

    void on_pushButton_Browse_clicked();

    void on_pushButton_CalculateHashFile_clicked();

    void on_pushButton_CalculateHashText_clicked();

private:
    Ui::MD5Window *ui;
};
#endif // MD5WINDOW_H
