/********************************************************************************
** Form generated from reading UI file 'md5window.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MD5WINDOW_H
#define UI_MD5WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MD5Window
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_Browse;
    QPushButton *pushButton_Browse;
    QPushButton *pushButton_CalculateHashFile;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Output_1;
    QLineEdit *lineEdit_Output_1;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_Input;
    QTextEdit *textEdit_Input;
    QPushButton *pushButton_CalculateHashText;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Output_2;
    QLineEdit *lineEdit_Output_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MD5Window)
    {
        if (MD5Window->objectName().isEmpty())
            MD5Window->setObjectName("MD5Window");
        MD5Window->resize(400, 400);
        MD5Window->setMaximumSize(QSize(400, 400));
        centralwidget = new QWidget(MD5Window);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName("verticalLayout_6");
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_Browse = new QLineEdit(groupBox_2);
        lineEdit_Browse->setObjectName("lineEdit_Browse");

        horizontalLayout->addWidget(lineEdit_Browse);

        pushButton_Browse = new QPushButton(groupBox_2);
        pushButton_Browse->setObjectName("pushButton_Browse");

        horizontalLayout->addWidget(pushButton_Browse);


        verticalLayout_2->addLayout(horizontalLayout);

        pushButton_CalculateHashFile = new QPushButton(groupBox_2);
        pushButton_CalculateHashFile->setObjectName("pushButton_CalculateHashFile");

        verticalLayout_2->addWidget(pushButton_CalculateHashFile);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_Output_1 = new QLabel(groupBox_2);
        label_Output_1->setObjectName("label_Output_1");

        horizontalLayout_2->addWidget(label_Output_1);

        lineEdit_Output_1 = new QLineEdit(groupBox_2);
        lineEdit_Output_1->setObjectName("lineEdit_Output_1");

        horizontalLayout_2->addWidget(lineEdit_Output_1);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_6->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_Input = new QLabel(groupBox_3);
        label_Input->setObjectName("label_Input");

        verticalLayout_5->addWidget(label_Input);

        textEdit_Input = new QTextEdit(groupBox_3);
        textEdit_Input->setObjectName("textEdit_Input");

        verticalLayout_5->addWidget(textEdit_Input);

        pushButton_CalculateHashText = new QPushButton(groupBox_3);
        pushButton_CalculateHashText->setObjectName("pushButton_CalculateHashText");

        verticalLayout_5->addWidget(pushButton_CalculateHashText);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_Output_2 = new QLabel(groupBox_3);
        label_Output_2->setObjectName("label_Output_2");

        horizontalLayout_4->addWidget(label_Output_2);

        lineEdit_Output_2 = new QLineEdit(groupBox_3);
        lineEdit_Output_2->setObjectName("lineEdit_Output_2");

        horizontalLayout_4->addWidget(lineEdit_Output_2);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_6->addWidget(groupBox_3);


        verticalLayout->addWidget(groupBox);

        MD5Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MD5Window);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 17));
        MD5Window->setMenuBar(menubar);
        statusbar = new QStatusBar(MD5Window);
        statusbar->setObjectName("statusbar");
        MD5Window->setStatusBar(statusbar);

        retranslateUi(MD5Window);

        QMetaObject::connectSlotsByName(MD5Window);
    } // setupUi

    void retranslateUi(QMainWindow *MD5Window)
    {
        MD5Window->setWindowTitle(QCoreApplication::translate("MD5Window", "MD5Window", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MD5Window", "MD5 Algorithem", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MD5Window", "File", nullptr));
        pushButton_Browse->setText(QCoreApplication::translate("MD5Window", "Browse", nullptr));
        pushButton_CalculateHashFile->setText(QCoreApplication::translate("MD5Window", "Calculate", nullptr));
        label_Output_1->setText(QCoreApplication::translate("MD5Window", "Output:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MD5Window", "Text", nullptr));
        label_Input->setText(QCoreApplication::translate("MD5Window", "Input:", nullptr));
        pushButton_CalculateHashText->setText(QCoreApplication::translate("MD5Window", "Calculate", nullptr));
        label_Output_2->setText(QCoreApplication::translate("MD5Window", "Output:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MD5Window: public Ui_MD5Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MD5WINDOW_H
