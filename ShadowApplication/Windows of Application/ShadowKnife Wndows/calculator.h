#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <QString>


namespace Ui {
class Calculator;
}

class Calculator : public QWidget
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

    QString a; //用于保存用户输入的数字
    QString b; //用于保存用户输入的符号
    QString text;

    bool Plus = false;
    bool Minus = false;
    bool Multiply = false;
    bool Divid = false;

    void MatchSymbol(void);

private slots:
    void NumClick(void);
    void SymbolClick(void);
    void EqualClick(void);
    void ClearClick(void);


private:
    Ui::Calculator *ui;
};

#endif // CALCULATOR_H
