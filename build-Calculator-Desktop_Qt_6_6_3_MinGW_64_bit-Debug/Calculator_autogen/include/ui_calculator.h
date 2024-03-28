/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button2;
    QPushButton *Button1;
    QPushButton *Button3;
    QPushButton *Button7;
    QPushButton *ChangeSign;
    QPushButton *Button0;
    QPushButton *Clear;
    QPushButton *Button4;
    QPushButton *Button9;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button8;
    QLineEdit *Display;
    QPushButton *MemAdd;
    QPushButton *MemSubtract;
    QPushButton *MemRecall;
    QPushButton *Subtract;
    QPushButton *Add;
    QPushButton *Multiply;
    QPushButton *Divide;
    QPushButton *MemClear;
    QPushButton *Equals;
    QPushButton *Squared;
    QPushButton *SquareRoot;
    QPushButton *Backspace;
    QPushButton *MemStore;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(362, 281);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 4, 2, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 4, 3, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 4, 1, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 2, 1, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName("ChangeSign");
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 5, 3, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 5, 2, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 5, 1, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 3, 3, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 2, 3, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 3, 2, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 3, 1, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #DDA0DD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 2, 2, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 1, 1, 5);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName("MemAdd");
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemAdd, 1, 1, 1, 1);

        MemSubtract = new QPushButton(centralwidget);
        MemSubtract->setObjectName("MemSubtract");
        sizePolicy.setHeightForWidth(MemSubtract->sizePolicy().hasHeightForWidth());
        MemSubtract->setSizePolicy(sizePolicy);
        MemSubtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemSubtract, 1, 2, 1, 1);

        MemRecall = new QPushButton(centralwidget);
        MemRecall->setObjectName("MemRecall");
        sizePolicy.setHeightForWidth(MemRecall->sizePolicy().hasHeightForWidth());
        MemRecall->setSizePolicy(sizePolicy);
        MemRecall->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemRecall, 1, 3, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName("Subtract");
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 5, 4, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 4, 4, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 3, 4, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 2, 4, 1, 1);

        MemClear = new QPushButton(centralwidget);
        MemClear->setObjectName("MemClear");
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemClear, 1, 4, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName("Equals");
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 5, 5, 1, 1);

        Squared = new QPushButton(centralwidget);
        Squared->setObjectName("Squared");
        sizePolicy.setHeightForWidth(Squared->sizePolicy().hasHeightForWidth());
        Squared->setSizePolicy(sizePolicy);
        Squared->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Squared, 4, 5, 1, 1);

        SquareRoot = new QPushButton(centralwidget);
        SquareRoot->setObjectName("SquareRoot");
        sizePolicy.setHeightForWidth(SquareRoot->sizePolicy().hasHeightForWidth());
        SquareRoot->setSizePolicy(sizePolicy);
        SquareRoot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(SquareRoot, 3, 5, 1, 1);

        Backspace = new QPushButton(centralwidget);
        Backspace->setObjectName("Backspace");
        sizePolicy.setHeightForWidth(Backspace->sizePolicy().hasHeightForWidth());
        Backspace->setSizePolicy(sizePolicy);
        Backspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Backspace, 2, 5, 1, 1);

        MemStore = new QPushButton(centralwidget);
        MemStore->setObjectName("MemStore");
        sizePolicy.setHeightForWidth(MemStore->sizePolicy().hasHeightForWidth());
        MemStore->setSizePolicy(sizePolicy);
        MemStore->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008080;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemStore, 1, 5, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 362, 21));
        Calculator->setMenuBar(menubar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        MemAdd->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        MemSubtract->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        MemRecall->setText(QCoreApplication::translate("Calculator", "MR", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        MemClear->setText(QCoreApplication::translate("Calculator", "MC", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Squared->setText(QCoreApplication::translate("Calculator", "X^2", nullptr));
        SquareRoot->setText(QCoreApplication::translate("Calculator", "Square Root", nullptr));
        Backspace->setText(QCoreApplication::translate("Calculator", "Backspace", nullptr));
        MemStore->setText(QCoreApplication::translate("Calculator", "MS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
