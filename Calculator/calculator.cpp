#include "calculator.h"
#include "./ui_calculator.h"

double calcValue = 0.0;
double currValue = 0.0;
double memValue = 0.0;
bool memRecall = false;
bool divTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
bool multTrigger = false;

 QString displayVal;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcValue));
    QPushButton *numButtons[10];
    for(int i = 0; i < 10; ++i)
    {
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }
    connect(ui->Add, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    connect(ui->Equals, SIGNAL(released()), this,
            SLOT(EqualButtonPressed()));

    connect(ui->Backspace, SIGNAL(released()), this,
            SLOT(Backspaced()));

    connect(ui->ChangeSign, SIGNAL(released()), this,
            SLOT(ChangeNumberSign()));

    connect(ui->Clear, SIGNAL(released()), this,
            SLOT(Clear()));

    connect(ui->MemStore, SIGNAL(released()), this,
            SLOT(MemStore()));
    connect(ui->MemAdd, SIGNAL(released()), this,
            SLOT(MemAdd()));
    connect(ui->MemSubtract, SIGNAL(released()), this,
            SLOT(MemSub()));
    connect(ui->MemClear, SIGNAL(released()), this,
            SLOT(MemClear()));
    connect(ui->MemRecall, SIGNAL(released()), this,
            SLOT(MemRecall()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    displayVal = ui->Display->text();

    //if we don't have a value we are currently inputting, change the value to the button's value
    if(currValue == 0 || currValue == 0.0 || memRecall){
        ui->Display->setText(butVal);
        currValue = butVal.toDouble();
        memRecall = false;
    }
    else {
        //QString newVal = displayVal + butVal; //concatenate the button we pressed to the end of the display number
        currValue = displayVal.toDouble() * 10 + butVal.toDouble(); //setting our new concatenated number to currValue
        ui->Display->setText(QString::number(currValue, 'g', 16)); //showing our new currValue on the Display Text
    }
}

void Calculator::Backspaced(){
    if(currValue == 0 || currValue == 0.0 && displayVal.toDouble() == 0)
    {
        currValue = 0;
    }
    else
    {
        QString backspaced = QString::number(currValue).removeLast();
        currValue = backspaced.toDouble();
        ui->Display->setText(QString::number(currValue, 'g', 16));
    }
}

void Calculator::MathButtonPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();

    //if the buttons have already been pressed, run calculations
    if(addTrigger || subTrigger || multTrigger || divTrigger)
    {
        Calculations();
    }
    else
    {
        calcValue = currValue;
        currValue = 0;
    }

    //resetting the triggers
    divTrigger = false;
    addTrigger = false;
    subTrigger = false;
    multTrigger = false;

    //determining which math operation we need to do
    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    }
    else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        multTrigger = true;
    }
    else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    }
    else{
        subTrigger = true;
    }
}

void Calculator::EqualButtonPressed(){
    Calculations();
}

void Calculator::Calculations(){
    double solution = 0.0;
    if(addTrigger || subTrigger || multTrigger || divTrigger){
        if(addTrigger){
            solution = calcValue + currValue;
        } else if(subTrigger){
            solution = calcValue - currValue;
        } else if(multTrigger){
            solution = calcValue * currValue;
        } else {
            solution = calcValue / currValue;
        }
    }
    calcValue = solution;
    ui->Display->setText(QString::number(calcValue)); //setting our display text to the calculated value
    currValue = 0; //resetting currValue
}

void Calculator::ChangeNumberSign(){
    QString displayVal = ui->Display->text();
    if(QString::compare(displayVal,"") != 0){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }
}

void Calculator::Clear(){
    calcValue = 0.0;
    currValue = 0.0;
    ui->Display->setText("0");
    divTrigger = false;
    addTrigger = false;
    subTrigger = false;
    multTrigger = false;
}

void Calculator::MemStore(){
    memValue = displayVal.toDouble();
}

void Calculator::MemAdd(){
    if(_isnan(memValue))
        memValue = 0;
    memValue = memValue + displayVal.toDouble();
}

void Calculator::MemSub(){
    if(_isnan(memValue))
        memValue = 0;
    memValue = memValue - displayVal.toDouble();
}

void Calculator::MemRecall(){
    if(!_isnan(memValue))
    {
        ui->Display->setText(QString::number(memValue));
        currValue = memValue;
        memRecall = true;
    }
}

void Calculator::MemClear(){
    memValue = NAN;
}
