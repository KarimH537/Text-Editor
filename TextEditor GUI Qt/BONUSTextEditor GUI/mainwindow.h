#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionAdd_text_triggered();

    void on_actionOpen_triggered();

    void on_actionEmpty_triggered();

    void on_actionSave_triggered();

    void on_actionEncrypt_triggered();

    void on_actionDecrypt_triggered();

    void on_actionUpper_case_triggered();

    void on_actionLower_case_triggered();

    void on_action1st_Upper_triggered();

    void on_actionWords_triggered();

    void on_actionLines_triggered();

    void on_actionCharacters_triggered();

    void on_actionSearch_triggered();


    void on_actionWord_repetition_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
