#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);


    this->setAttribute(Qt::WA_TranslucentBackground,true);/* 让系统默认背景透明 */


    /*数字的信号连接*/
    connect(ui->NumBtn0,SIGNAL(clicked(bool)),this,SLOT(NumClick(void)));
    connect(ui->NumBtn1,SIGNAL(clicked(bool)),this,SLOT(NumClick(void)));
    connect(ui->NumBtn2,SIGNAL(clicked(bool)),this,SLOT(NumClick(void)));
    connect(ui->NumBtn3,SIGNAL(clicked(bool)),this,SLOT(NumClick(void)));
    connect(ui->NumBtn4,SIGNAL(clicked(bool)),this,SLOT(NumClick(void)));
    connect(ui->NumBtn5,SIGNAL(clicked(bool)),this,SLOT(NumClick(void)));
    connect(ui->NumBtn6,SIGNAL(clicked(bool)),this,SLOT(NumClick(void)));
    connect(ui->NumBtn7,SIGNAL(clicked(bool)),this,SLOT(NumClick(void)));
    connect(ui->NumBtn8,SIGNAL(clicked(bool)),this,SLOT(NumClick(void)));
    connect(ui->NumBtn9,SIGNAL(clicked(bool)),this,SLOT(NumClick(void)));
    connect(ui->PointBtn,SIGNAL(clicked(bool)),this,SLOT(NumClick(void)));

    connect(ui->PlusBtn,SIGNAL(clicked(bool)),this,SLOT(SymbolClick(void)));
    connect(ui->MinusBtn,SIGNAL(clicked(bool)),this,SLOT(SymbolClick(void)));
    connect(ui->MultiplyBtn,SIGNAL(clicked(bool)),this,SLOT(SymbolClick(void)));
    connect(ui->DividBtn,SIGNAL(clicked(bool)),this,SLOT(SymbolClick(void)));

    connect(ui->CEBtn,SIGNAL(clicked(bool)),this,SLOT(ClearClick(void)));
    connect(ui->CBtn,SIGNAL(clicked(bool)),this,SLOT(ClearClick(void)));

    connect(ui->EqualBtn,SIGNAL(clicked(bool)),this,SLOT(EqualClick(void)));



}


Calculator::~Calculator()
{
    delete ui;
}


void Calculator::NumClick(void)
{
    QPushButton *NumName = qobject_cast<QPushButton *>(sender());
    ui->plainTextEdit->textCursor().insertText(NumName->text());
    text = ui->plainTextEdit->toPlainText();

    if(Plus)
    {
        int i = text.indexOf("+");
        text = text.mid(i+1);
        b = text;
    }
    else if(Minus)
    {
        int i = text.indexOf("-");
        text = text.mid(i+1);
        b = text;
    }
    else if(Multiply)
    {
        int i = text.indexOf("×");
        text = text.mid(i+1);
        b = text;
    }
    else if(Divid)
    {
        int i = text.indexOf("÷");
        text = text.mid(i+1);
        b = text;
    }
    else
    {
        a = text;
    }
}



void Calculator::SymbolClick(void)
{
    QPushButton *Symbol = qobject_cast<QPushButton *>(sender());
    QString Sb = Symbol->text();

    if(!(Plus || Minus || Multiply || Divid))
    {
        if(Sb == "+")
        {
            Plus = true;
            ui->plainTextEdit->textCursor().insertText("+");
        }
        else if(Sb == "-")
        {
            Minus = true;
            ui->plainTextEdit->textCursor().insertText("-");
        }
        else if(Sb == "×")
        {
            Multiply = true;
            ui->plainTextEdit->textCursor().insertText("×");
        }
        else if(Sb == "÷")
        {
            Divid = true;
            ui->plainTextEdit->textCursor().insertText("÷");
        }
    }
}


void Calculator::EqualClick(void)
{
    double x;
    double y;

    text = ui->plainTextEdit->toPlainText();
    MatchSymbol();
    x = a.toDouble();
    y = b.toDouble();

    if(Plus)
    {
        ui->plainTextEdit->setPlainText(a = QString::number(x + y));
        Plus = false;
    }
    else if(Minus)
    {
        ui->plainTextEdit->setPlainText(a = QString::number(x - y));
        Minus = false;
    }
    else if(Multiply)
    {
        ui->plainTextEdit->setPlainText(a = QString::number(x * y));
        Multiply = false;
    }
    else if(Divid)
    {
        ui->plainTextEdit->setPlainText(a = QString::number(x / y));
        Divid = false;
    }
}


void Calculator::ClearClick(void)
{
    QPushButton *Clear = qobject_cast<QPushButton *>(sender());
    QString Cl = Clear->text();

    if(Cl == "CE")
    {
        a = b = 0;
        Plus = Minus = Multiply = Divid = false;
        ui->plainTextEdit->setPlainText("");
    }
    else if(Cl == "C")
    {
        text = ui->plainTextEdit->toPlainText();
        text.chop(1);
        Plus = Minus = Multiply = Divid = false;
        MatchSymbol();
        ui->plainTextEdit->setPlainText(text);
        ui->plainTextEdit->moveCursor(QTextCursor::End);
    }
}


void Calculator::MatchSymbol(void)
{
    if(text.contains("+",Qt::CaseSensitive))
    {
        QStringList t = text.split("+");
        a = t[0];
        b = t[1];
        Plus = true;
    }
    else if(text.contains("-",Qt::CaseSensitive))
    {
        QStringList t = text.split("-");
        a = t[0];
        b = t[1];
        Minus = true;
    }
    else if(text.contains("×",Qt::CaseSensitive))
    {
        QStringList t = text.split("×");
        a = t[0];
        b = t[1];
        Multiply = true;
    }
    else if(text.contains("÷",Qt::CaseSensitive))
    {
        QStringList t = text.split("÷");
        a = t[0];
        b = t[1];
        Divid = true;
    }
}

















