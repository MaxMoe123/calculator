#include <QtCore>
#include <QtGui>

class Calculator : public QWidget {
public:
    Calculator(QWidget *parent = nullptr);

private:
    QLabel *label;
    int firstNumber;
    int secondNumber;
    QString value;
    
    void clear();
    void press0();
    void press1();
    void press2();
    void press3();
    void press4();
    void press5();
    void press6();
    void press7();
    void press8();
    void press9();
    void pressadd();
    void presssub();
    void pressmul();
    void pressdiv();
    void pressequals();
};

Calculator::Calculator(QWidget *parent) : QWidget(parent) {
    setFixedSize(300, 400);
    setWindowTitle("Calculator");

   //Buttons from 0 to 9, +, -, *, /, = and C
   QPushButton *pb_zero = new QPushButton("0", this);
   pb_zero->setFixedSize(60, 60);
   pb_zero->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_one = new QPushButton("1", this);
   pb_one->setFixedSize(60, 60);
   pb_one->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_two = new QPushButton("2", this);
   pb_two->setFixedSize(60, 60);
   pb_two->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_three = new QPushButton("3", this);
   pb_three->setFixedSize(60, 60);
   pb_three->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_four = new QPushButton("4", this);
   pb_four->setFixedSize(60, 60);
   pb_four->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_five = new QPushButton("5", this);
   pb_five->setFixedSize(60, 60);
   pb_five->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_six = new QPushButton("6", this);
   pb_six->setFixedSize(60, 60);
   pb_six->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_seven = new QPushButton("7", this);
   pb_seven->setFixedSize(60, 60);
   pb_seven->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_eight = new QPushButton("8", this);
   pb_eight->setFixedSize(60, 60);
   pb_eight->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_nine = new QPushButton("9", this);
   pb_nine->setFixedSize(60, 60);
   pb_nine->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_addition = new QPushButton("+", this);
   pb_addition->setFixedSize(60, 60);
   pb_addition->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_subtraction = new QPushButton("-", this);
   pb_subtraction->setFixedSize(60, 60);
   pb_subtraction->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_multiplication = new QPushButton("*", this);
   pb_multiplication->setFixedSize(60, 60);
   pb_multiplication->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_division = new QPushButton("/", this);
   pb_division->setFixedSize(60, 60);
   pb_division->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_equals = new QPushButton("=", this);
   pb_equals->setFixedSize(60, 60);
   pb_equals->setStyleSheet("font-size: 20px;"); 

   QPushButton *pb_clear = new QPushButton("C", this);
   pb_clear->setFixedSize(60, 60);
   pb_clear->setStyleSheet("font-size: 20px;"); 
   
   //first vertical Layout for Label
   QVBoxLayout *mainLayout = new QVBoxLayout(this);
   label = new QLabel("0", this);
   label->setStyleSheet("font-size: 40px;");
   label->setAlignment(Qt::AlignRight);
   mainLayout->addWidget(label);

   //second horizonal Layout for 7, 8, 9, /
   QHBoxLayout *secondLine = new QHBoxLayout(this);
   secondLine->addWidget(pb_seven);
   secondLine->addWidget(pb_eight);
   secondLine->addWidget(pb_nine);
   secondLine->addWidget(pb_division);
   mainLayout->addLayout(secondLine);

   //third horizonal Layout for 4, 5, 6, *
   QHBoxLayout *thirdLine = new QHBoxLayout(this);
   thirdLine->addWidget(pb_four);
   thirdLine->addWidget(pb_five);
   thirdLine->addWidget(pb_six);
   thirdLine->addWidget(pb_multiplication);
   mainLayout->addLayout(thirdLine);

   //fourth horizonal Layout for 1, 2, 3, -
   QHBoxLayout *fourthLine = new QHBoxLayout(this);
   fourthLine->addWidget(pb_one);
   fourthLine->addWidget(pb_two);
   fourthLine->addWidget(pb_three);
   fourthLine->addWidget(pb_subtraction);
   mainLayout->addLayout(fourthLine);

   //fifth horizonal Layout for 0, C, =, +
   QHBoxLayout *fifthLine = new QHBoxLayout(this);
   fifthLine->addWidget(pb_zero);
   fifthLine->addWidget(pb_clear);
   fifthLine->addWidget(pb_equals);
   fifthLine->addWidget(pb_addition);
   mainLayout->addLayout(fifthLine);
   
   //Signal und Slot
   connect(pb_zero, &QPushButton::clicked, this, &Calculator::press0);
   connect(pb_one, &QPushButton::clicked, this, &Calculator::press1);
   connect(pb_two, &QPushButton::clicked, this, &Calculator::press2);
   connect(pb_three, &QPushButton::clicked, this, &Calculator::press3);
   connect(pb_four, &QPushButton::clicked, this, &Calculator::press4);
   connect(pb_five, &QPushButton::clicked, this, &Calculator::press5);
   connect(pb_six, &QPushButton::clicked, this, &Calculator::press6);
   connect(pb_seven, &QPushButton::clicked, this, &Calculator::press7);
   connect(pb_eight, &QPushButton::clicked, this, &Calculator::press8);
   connect(pb_nine, &QPushButton::clicked, this, &Calculator::press9);
   connect(pb_addition, &QPushButton::clicked, this, &Calculator::pressadd);
   connect(pb_subtraction, &QPushButton::clicked, this, &Calculator::presssub);
   connect(pb_multiplication, &QPushButton::clicked, this, &Calculator::pressmul);
   connect(pb_division, &QPushButton::clicked, this, &Calculator::pressdiv);
   connect(pb_equals, &QPushButton::clicked, this, &Calculator::pressequals);
   connect(pb_clear, &QPushButton::clicked, this, &Calculator::clear);
}

//methods for 0 to 9, +, -, *, /, = and C
void Calculator::clear() {
    label->setText("0");
    firstNumber = 0;
    secondNumber = 0;
    value = "";
}
void Calculator::press0() {
    label->setText(label->text() + "0");
}
void Calculator::press1() {
    label->setText(label->text() + "1");
}
void Calculator::press2() {
    label->setText(label->text() + "2");
}
void Calculator::press3() {
    label->setText(label->text() + "3");
}
void Calculator::press4() {
    label->setText(label->text() + "4");
}
void Calculator::press5() {
    label->setText(label->text() + "5");
}
void Calculator::press6() {
    label->setText(label->text() + "6");
}
void Calculator::press7() {
    label->setText(label->text() + "7");
}
void Calculator::press8() {
    label->setText(label->text() + "8");
}
void Calculator::press9() {
    label->setText(label->text() + "9");
}
void Calculator::pressadd() {
    firstNumber = label->text().toInt();
    value = "+";
    label->setText("0");
}
void Calculator::presssub() {
    firstNumber = label->text().toInt();
    value = "-";
    label->setText("0");
}
void Calculator::pressmul() {
    firstNumber = label->text().toInt();
    value = "*";
    label->setText("0");
}
void Calculator::pressdiv() {
    firstNumber = label->text().toInt();
    value = "/";
    label->setText("0");
}

//calculations
void Calculator::pressequals() {
    secondNumber = label->text().toInt();
    
    if (value == "+") {
        label->setText(QString::number(firstNumber + secondNumber));
    } else if (value == "-") {
        label->setText(QString::number(firstNumber - secondNumber));
    } else if (value == "*") {
        label->setText(QString::number(firstNumber * secondNumber));
    } else if (value == "/") {
        if (secondNumber == 0) {
            label->setText("Error");
        } else {
            label->setText(QString::number(firstNumber / secondNumber));
        }
    }
    value = "";
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Calculator calc;
    calc.show();
    return app.exec();
}