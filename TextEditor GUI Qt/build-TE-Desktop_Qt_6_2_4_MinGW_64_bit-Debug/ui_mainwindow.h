/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_text;
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionEmpty;
    QAction *actionSearch;
    QAction *actionSave;
    QAction *actionEncrypt;
    QAction *actionDecrypt;
    QAction *actionUpper_case;
    QAction *actionLower_case;
    QAction *action1st_Upper;
    QAction *actionWords;
    QAction *actionCharacters;
    QAction *actionLines;
    QAction *actionWord_repetition;
    QAction *actionMerge;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuCount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(798, 622);
        actionAdd_text = new QAction(MainWindow);
        actionAdd_text->setObjectName(QString::fromUtf8("actionAdd_text"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IMG/add-text.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_text->setIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/IMG/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/IMG/display.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon2);
        actionEmpty = new QAction(MainWindow);
        actionEmpty->setObjectName(QString::fromUtf8("actionEmpty"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/IMG/empty-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEmpty->setIcon(icon3);
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/IMG/search.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSearch->setIcon(icon4);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/IMG/save.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave->setIcon(icon5);
        actionEncrypt = new QAction(MainWindow);
        actionEncrypt->setObjectName(QString::fromUtf8("actionEncrypt"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/IMG/encrypted.png"), QSize(), QIcon::Normal, QIcon::On);
        actionEncrypt->setIcon(icon6);
        actionDecrypt = new QAction(MainWindow);
        actionDecrypt->setObjectName(QString::fromUtf8("actionDecrypt"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/IMG/decryption.png"), QSize(), QIcon::Normal, QIcon::On);
        actionDecrypt->setIcon(icon7);
        actionUpper_case = new QAction(MainWindow);
        actionUpper_case->setObjectName(QString::fromUtf8("actionUpper_case"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/IMG/upper-case.png"), QSize(), QIcon::Normal, QIcon::On);
        actionUpper_case->setIcon(icon8);
        actionLower_case = new QAction(MainWindow);
        actionLower_case->setObjectName(QString::fromUtf8("actionLower_case"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/IMG/lower-case.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLower_case->setIcon(icon9);
        action1st_Upper = new QAction(MainWindow);
        action1st_Upper->setObjectName(QString::fromUtf8("action1st_Upper"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/IMG/1st.upper.png"), QSize(), QIcon::Normal, QIcon::Off);
        action1st_Upper->setIcon(icon10);
        actionWords = new QAction(MainWindow);
        actionWords->setObjectName(QString::fromUtf8("actionWords"));
        actionCharacters = new QAction(MainWindow);
        actionCharacters->setObjectName(QString::fromUtf8("actionCharacters"));
        actionLines = new QAction(MainWindow);
        actionLines->setObjectName(QString::fromUtf8("actionLines"));
        actionWord_repetition = new QAction(MainWindow);
        actionWord_repetition->setObjectName(QString::fromUtf8("actionWord_repetition"));
        actionMerge = new QAction(MainWindow);
        actionMerge->setObjectName(QString::fromUtf8("actionMerge"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/IMG/merge.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMerge->setIcon(icon11);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-10, -10, 811, 591));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(809, 0));

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 798, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuCount = new QMenu(menubar);
        menuCount->setObjectName(QString::fromUtf8("menuCount"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuCount->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionAdd_text);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionMerge);
        menuFile->addAction(actionEmpty);
        menuFile->addAction(actionSearch);
        menuFile->addAction(actionSave);
        menuEdit->addAction(actionEncrypt);
        menuEdit->addAction(actionDecrypt);
        menuEdit->addAction(actionUpper_case);
        menuEdit->addAction(actionLower_case);
        menuEdit->addAction(action1st_Upper);
        menuCount->addAction(actionWords);
        menuCount->addAction(actionCharacters);
        menuCount->addAction(actionLines);
        menuCount->addAction(actionWord_repetition);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdd_text->setText(QCoreApplication::translate("MainWindow", "Add text", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionEmpty->setText(QCoreApplication::translate("MainWindow", "Empty", nullptr));
        actionSearch->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionEncrypt->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        actionDecrypt->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        actionUpper_case->setText(QCoreApplication::translate("MainWindow", "Upper case", nullptr));
        actionLower_case->setText(QCoreApplication::translate("MainWindow", "Lower case", nullptr));
        action1st_Upper->setText(QCoreApplication::translate("MainWindow", "1st Upper", nullptr));
        actionWords->setText(QCoreApplication::translate("MainWindow", "Words", nullptr));
        actionCharacters->setText(QCoreApplication::translate("MainWindow", "Characters", nullptr));
        actionLines->setText(QCoreApplication::translate("MainWindow", "Lines", nullptr));
        actionWord_repetition->setText(QCoreApplication::translate("MainWindow", "Word repetition", nullptr));
        actionMerge->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuCount->setTitle(QCoreApplication::translate("MainWindow", "Count", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
