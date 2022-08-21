/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *Top;
    QHBoxLayout *horizontalLayout;
    QPushButton *MeanBtn;
    QLabel *MeabText;
    QSpacerItem *horizontalSpacer;
    QPushButton *HistoryBtn;
    QWidget *Bottom;
    QVBoxLayout *verticalLayout_3;
    QWidget *Show;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QLabel *Display1;
    QWidget *Ketboard;
    QHBoxLayout *horizontalLayout_2;
    QWidget *Group1;
    QVBoxLayout *verticalLayout_4;
    QPushButton *PushButton1;
    QPushButton *PushButton2;
    QPushButton *NumBtn7;
    QPushButton *NumBtn4;
    QPushButton *NumBtn1;
    QPushButton *PushButton3;
    QWidget *Group2;
    QVBoxLayout *verticalLayout_7;
    QPushButton *CEBtn;
    QPushButton *PushButton4;
    QPushButton *NumBtn8;
    QPushButton *NumBtn5;
    QPushButton *NumBtn2;
    QPushButton *NumBtn0;
    QWidget *Group3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *CBtn;
    QPushButton *PushButton5;
    QPushButton *NumBtn9;
    QPushButton *NumBtn6;
    QPushButton *NumBtn3;
    QPushButton *PointBtn;
    QWidget *Group4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *DeleteBtn;
    QPushButton *DividBtn;
    QPushButton *MultiplyBtn;
    QPushButton *MinusBtn;
    QPushButton *PlusBtn;
    QPushButton *EqualBtn;

    void setupUi(QWidget *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(320, 500);
        Calculator->setMinimumSize(QSize(320, 500));
        Calculator->setMaximumSize(QSize(320, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Calculate/Image/Calculate/calculate.png"), QSize(), QIcon::Normal, QIcon::Off);
        Calculator->setWindowIcon(icon);
        Calculator->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(Calculator);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Calculator);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Top = new QWidget(widget);
        Top->setObjectName(QString::fromUtf8("Top"));
        Top->setStyleSheet(QString::fromUtf8("#MeanBtn,\n"
"#HistoryBtn{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(20, 47, 78, 219), stop:1 rgba(85, 98, 112, 226));\n"
" color:rgba(255,255,255,210);\n"
" border-radius:5px;\n"
"}\n"
"#MeanBtn:hover,\n"
"#HistoryBtnhover{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132, 226));\n"
"}\n"
"#MeanBtn:pressed,\n"
"#HistoryBtn:pressed{\n"
" background-color:rgba(105,118,132,200);\n"
"}\n"
"#MeabText{\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(Top);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MeanBtn = new QPushButton(Top);
        MeanBtn->setObjectName(QString::fromUtf8("MeanBtn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MainInterface/Image/MainInterface/align-justify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MeanBtn->setIcon(icon1);
        MeanBtn->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(MeanBtn);

        MeabText = new QLabel(Top);
        MeabText->setObjectName(QString::fromUtf8("MeabText"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        MeabText->setFont(font);

        horizontalLayout->addWidget(MeabText);

        horizontalSpacer = new QSpacerItem(171, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        HistoryBtn = new QPushButton(Top);
        HistoryBtn->setObjectName(QString::fromUtf8("HistoryBtn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MainInterface/Image/MainInterface/clock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        HistoryBtn->setIcon(icon2);
        HistoryBtn->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(HistoryBtn);


        verticalLayout_2->addWidget(Top, 0, Qt::AlignTop);

        Bottom = new QWidget(widget);
        Bottom->setObjectName(QString::fromUtf8("Bottom"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Bottom->sizePolicy().hasHeightForWidth());
        Bottom->setSizePolicy(sizePolicy);
        Bottom->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        verticalLayout_3 = new QVBoxLayout(Bottom);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        Show = new QWidget(Bottom);
        Show->setObjectName(QString::fromUtf8("Show"));
        Show->setMaximumSize(QSize(16777215, 120));
        gridLayout = new QGridLayout(Show);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit = new QPlainTextEdit(Show);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 1);

        Display1 = new QLabel(Show);
        Display1->setObjectName(QString::fromUtf8("Display1"));
        Display1->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setPointSize(13);
        Display1->setFont(font1);
        Display1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display1, 0, 0, 1, 1);


        verticalLayout_3->addWidget(Show);

        Ketboard = new QWidget(Bottom);
        Ketboard->setObjectName(QString::fromUtf8("Ketboard"));
        Ketboard->setStyleSheet(QString::fromUtf8("#NumBtn0,#NumBtn1,#NumBtn2,#NumBtn3,#NumBtn4,\n"
"#NumBtn5,#NumBtn6,#NumBtn7,#NumBtn8,#NumBtn9,\n"
"#DividBtn,#MultiplyBtn,#MinusBtn,#PlusBtn,#EqualBtn,\n"
"#CEBtn,#DeleteBtn,#CBtn,#PointBtn,#PushButton1,\n"
"#PushButton2,#PushButton3,#PushButton4,#PushButton5{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(20, 47, 78, 219), stop:1 rgba(85, 98, 112, 226));\n"
" color:rgba(255,255,255,210);\n"
" border-radius:5px;\n"
"}\n"
"#NumBtn0:hover,#NumBtn1:hover,#NumBtn2:hover,#NumBtn3:hover,#NumBtn4:hover,\n"
"#NumBtn5:hover,#NumBtn6:hover,#NumBtn7:hover,#NumBtn8:hover,#NumBtn9:hover,\n"
"#DividBtn:hover,#MultiplyBtn:hover,#MinusBtn:hover,#PlusBtn:hover,#EqualBtn:hover,\n"
"#CEBtn:hover,#DeleteBtn:hover,#CBtn:hover,#PointBtn:hover,#PushButton1:hover,\n"
"#PushButton2:hover,#PushButton3:hover,#PushButton4:hover,#PushButton5:hover{\n"
" background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(40, 67, 98, 219), stop:1 rgba(105, 118, 132"
                        ", 226));\n"
"}\n"
"#NumBtn0:pressed,#NumBtn1:pressed,#NumBtn2:pressed,#NumBtn3:pressed,#NumBtn4:pressed,\n"
"#NumBtn5:pressed,#NumBt6:pressed,#NumBtn7:pressed,#NumBtn8:pressed,#NumBtn9:pressed,\n"
"#DividBtn:pressed,#MultiplyBtn:pressed,#MinusBtn:pressed,#PlusBtn:pressed,#EqualBtn:pressed,\n"
"#CEBtn:pressed,#DeleteBtn:pressed,#CBtn:pressed,#PointBtn:pressed,#PushButton1:pressed,\n"
"#PushButton2:pressed,#PushButton3:pressed,#PushButton4:pressed,#PushButton5:pressed{\n"
" background-color:rgba(105,118,132,200);\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(Ketboard);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Group1 = new QWidget(Ketboard);
        Group1->setObjectName(QString::fromUtf8("Group1"));
        verticalLayout_4 = new QVBoxLayout(Group1);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, 0, 0, 0);
        PushButton1 = new QPushButton(Group1);
        PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
        PushButton1->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setPointSize(12);
        PushButton1->setFont(font2);

        verticalLayout_4->addWidget(PushButton1);

        PushButton2 = new QPushButton(Group1);
        PushButton2->setObjectName(QString::fromUtf8("PushButton2"));
        PushButton2->setMinimumSize(QSize(0, 50));
        QFont font3;
        font3.setPointSize(11);
        PushButton2->setFont(font3);

        verticalLayout_4->addWidget(PushButton2);

        NumBtn7 = new QPushButton(Group1);
        NumBtn7->setObjectName(QString::fromUtf8("NumBtn7"));
        NumBtn7->setMinimumSize(QSize(0, 50));
        QFont font4;
        font4.setPointSize(15);
        NumBtn7->setFont(font4);

        verticalLayout_4->addWidget(NumBtn7);

        NumBtn4 = new QPushButton(Group1);
        NumBtn4->setObjectName(QString::fromUtf8("NumBtn4"));
        NumBtn4->setMinimumSize(QSize(0, 50));
        NumBtn4->setFont(font4);

        verticalLayout_4->addWidget(NumBtn4);

        NumBtn1 = new QPushButton(Group1);
        NumBtn1->setObjectName(QString::fromUtf8("NumBtn1"));
        NumBtn1->setMinimumSize(QSize(0, 50));
        NumBtn1->setFont(font4);

        verticalLayout_4->addWidget(NumBtn1);

        PushButton3 = new QPushButton(Group1);
        PushButton3->setObjectName(QString::fromUtf8("PushButton3"));
        PushButton3->setMinimumSize(QSize(0, 50));
        PushButton3->setFont(font4);

        verticalLayout_4->addWidget(PushButton3);


        horizontalLayout_2->addWidget(Group1);

        Group2 = new QWidget(Ketboard);
        Group2->setObjectName(QString::fromUtf8("Group2"));
        verticalLayout_7 = new QVBoxLayout(Group2);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        CEBtn = new QPushButton(Group2);
        CEBtn->setObjectName(QString::fromUtf8("CEBtn"));
        CEBtn->setMinimumSize(QSize(0, 50));
        CEBtn->setFont(font2);

        verticalLayout_7->addWidget(CEBtn);

        PushButton4 = new QPushButton(Group2);
        PushButton4->setObjectName(QString::fromUtf8("PushButton4"));
        PushButton4->setMinimumSize(QSize(0, 50));
        PushButton4->setFont(font3);

        verticalLayout_7->addWidget(PushButton4);

        NumBtn8 = new QPushButton(Group2);
        NumBtn8->setObjectName(QString::fromUtf8("NumBtn8"));
        NumBtn8->setMinimumSize(QSize(0, 50));
        NumBtn8->setFont(font4);

        verticalLayout_7->addWidget(NumBtn8);

        NumBtn5 = new QPushButton(Group2);
        NumBtn5->setObjectName(QString::fromUtf8("NumBtn5"));
        NumBtn5->setMinimumSize(QSize(0, 50));
        NumBtn5->setFont(font4);

        verticalLayout_7->addWidget(NumBtn5);

        NumBtn2 = new QPushButton(Group2);
        NumBtn2->setObjectName(QString::fromUtf8("NumBtn2"));
        NumBtn2->setMinimumSize(QSize(0, 50));
        NumBtn2->setFont(font4);

        verticalLayout_7->addWidget(NumBtn2);

        NumBtn0 = new QPushButton(Group2);
        NumBtn0->setObjectName(QString::fromUtf8("NumBtn0"));
        NumBtn0->setMinimumSize(QSize(0, 50));
        NumBtn0->setFont(font4);

        verticalLayout_7->addWidget(NumBtn0);


        horizontalLayout_2->addWidget(Group2);

        Group3 = new QWidget(Ketboard);
        Group3->setObjectName(QString::fromUtf8("Group3"));
        verticalLayout_6 = new QVBoxLayout(Group3);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        CBtn = new QPushButton(Group3);
        CBtn->setObjectName(QString::fromUtf8("CBtn"));
        CBtn->setMinimumSize(QSize(0, 50));
        CBtn->setFont(font2);

        verticalLayout_6->addWidget(CBtn);

        PushButton5 = new QPushButton(Group3);
        PushButton5->setObjectName(QString::fromUtf8("PushButton5"));
        PushButton5->setMinimumSize(QSize(0, 50));
        PushButton5->setFont(font3);

        verticalLayout_6->addWidget(PushButton5);

        NumBtn9 = new QPushButton(Group3);
        NumBtn9->setObjectName(QString::fromUtf8("NumBtn9"));
        NumBtn9->setMinimumSize(QSize(0, 50));
        NumBtn9->setFont(font4);

        verticalLayout_6->addWidget(NumBtn9);

        NumBtn6 = new QPushButton(Group3);
        NumBtn6->setObjectName(QString::fromUtf8("NumBtn6"));
        NumBtn6->setMinimumSize(QSize(0, 50));
        NumBtn6->setFont(font4);

        verticalLayout_6->addWidget(NumBtn6);

        NumBtn3 = new QPushButton(Group3);
        NumBtn3->setObjectName(QString::fromUtf8("NumBtn3"));
        NumBtn3->setMinimumSize(QSize(0, 50));
        NumBtn3->setFont(font4);

        verticalLayout_6->addWidget(NumBtn3);

        PointBtn = new QPushButton(Group3);
        PointBtn->setObjectName(QString::fromUtf8("PointBtn"));
        PointBtn->setMinimumSize(QSize(0, 50));
        QFont font5;
        font5.setPointSize(20);
        PointBtn->setFont(font5);

        verticalLayout_6->addWidget(PointBtn);


        horizontalLayout_2->addWidget(Group3);

        Group4 = new QWidget(Ketboard);
        Group4->setObjectName(QString::fromUtf8("Group4"));
        verticalLayout_5 = new QVBoxLayout(Group4);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 2, 0);
        DeleteBtn = new QPushButton(Group4);
        DeleteBtn->setObjectName(QString::fromUtf8("DeleteBtn"));
        DeleteBtn->setMinimumSize(QSize(0, 50));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(false);
        DeleteBtn->setFont(font6);

        verticalLayout_5->addWidget(DeleteBtn);

        DividBtn = new QPushButton(Group4);
        DividBtn->setObjectName(QString::fromUtf8("DividBtn"));
        DividBtn->setMinimumSize(QSize(0, 50));
        QFont font7;
        font7.setPointSize(15);
        font7.setBold(false);
        DividBtn->setFont(font7);

        verticalLayout_5->addWidget(DividBtn);

        MultiplyBtn = new QPushButton(Group4);
        MultiplyBtn->setObjectName(QString::fromUtf8("MultiplyBtn"));
        MultiplyBtn->setMinimumSize(QSize(0, 50));
        MultiplyBtn->setFont(font7);

        verticalLayout_5->addWidget(MultiplyBtn);

        MinusBtn = new QPushButton(Group4);
        MinusBtn->setObjectName(QString::fromUtf8("MinusBtn"));
        MinusBtn->setMinimumSize(QSize(0, 50));
        MinusBtn->setFont(font4);

        verticalLayout_5->addWidget(MinusBtn);

        PlusBtn = new QPushButton(Group4);
        PlusBtn->setObjectName(QString::fromUtf8("PlusBtn"));
        PlusBtn->setMinimumSize(QSize(0, 50));
        PlusBtn->setFont(font4);

        verticalLayout_5->addWidget(PlusBtn);

        EqualBtn = new QPushButton(Group4);
        EqualBtn->setObjectName(QString::fromUtf8("EqualBtn"));
        EqualBtn->setMinimumSize(QSize(0, 50));
        EqualBtn->setFont(font4);

        verticalLayout_5->addWidget(EqualBtn);


        horizontalLayout_2->addWidget(Group4);


        verticalLayout_3->addWidget(Ketboard);


        verticalLayout_2->addWidget(Bottom);


        verticalLayout->addWidget(widget);


        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QWidget *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        MeanBtn->setText(QString());
        MeabText->setText(QCoreApplication::translate("Calculator", "Standard", nullptr));
        HistoryBtn->setText(QString());
        Display1->setText(QCoreApplication::translate("Calculator", "TextLabel", nullptr));
        PushButton1->setText(QString());
        PushButton2->setText(QString());
        NumBtn7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        NumBtn4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        NumBtn1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        PushButton3->setText(QString());
        CEBtn->setText(QCoreApplication::translate("Calculator", "CE", nullptr));
        PushButton4->setText(QString());
        NumBtn8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        NumBtn5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        NumBtn2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        NumBtn0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        CBtn->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        PushButton5->setText(QString());
        NumBtn9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        NumBtn6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        NumBtn3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        PointBtn->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        DeleteBtn->setText(QString());
        DividBtn->setText(QCoreApplication::translate("Calculator", "\303\267", nullptr));
        MultiplyBtn->setText(QCoreApplication::translate("Calculator", "\303\227", nullptr));
        MinusBtn->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        PlusBtn->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        EqualBtn->setText(QCoreApplication::translate("Calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
