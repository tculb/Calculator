#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void Calculations();
    void ChangeNumberSign();
    void Clear();

    void Backspaced();
    //void Squared();
    //void SquareRoot();

    void MemStore();
    void MemAdd();
    void MemSub();
    void MemRecall();
    void MemClear();
};
#endif // CALCULATOR_H
