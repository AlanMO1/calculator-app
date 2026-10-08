#include "autoresize.h"

autoresize::autoresize(){
    
    setWindowTitle("calculator");
    resize(320, 500);
    setMinimumSize(320,470);
    
    //button set up
    
    //row1
    btn_percent = new QPushButton("%", this);
    btn_CE = new QPushButton("CE", this);
    btn_C = new QPushButton("C", this);
    btn_delete = new QPushButton("⌫", this);

    //row2
    btn_inv = new QPushButton("¹⁄ₓ", this);
    btn_sqr = new QPushButton("x²", this);
    btn_sqrt = new QPushButton("²√x", this);
    btn_divide = new QPushButton("÷", this);

    //row3 
    btn_7 = new QPushButton("7" , this);
    btn_8 = new QPushButton("8" , this);
    btn_9 = new QPushButton("9" , this);
    btn_multi = new QPushButton("X" , this);

    //row 4
    btn_4 = new QPushButton("4",this);
    btn_5 = new QPushButton("5",this);
    btn_6 = new QPushButton("6",this);
    btn_sub = new QPushButton("-",this);
    
    //row 5
    btn_1 = new QPushButton("1",this);
    btn_2 = new QPushButton("2",this);
    btn_3 = new QPushButton("3",this);
    btn_add = new QPushButton("+",this);

    //row 6
    btn_neg = new QPushButton("+/-",this);
    btn_0 = new QPushButton("0",this);
    btn_deci = new QPushButton(".",this);
    btn_equal = new QPushButton("=",this);

    //display box
    TT = new QLabel(this);
    aboveDisplay = new QLabel(this);
    //buttondetection
    connect(btn_percent,&QPushButton::clicked,this, &autoresize::clickMeButton);
    //button 0-9
    connect(btn_1,&QPushButton::clicked,this, &autoresize::num1_btn);
    connect(btn_2,&QPushButton::clicked,this, &autoresize::num2_btn);
    connect(btn_3,&QPushButton::clicked,this, &autoresize::num3_btn);
    connect(btn_4,&QPushButton::clicked,this, &autoresize::num4_btn);
    connect(btn_5,&QPushButton::clicked,this, &autoresize::num5_btn);
    connect(btn_6,&QPushButton::clicked,this, &autoresize::num6_btn);
    connect(btn_7,&QPushButton::clicked,this, &autoresize::num7_btn);
    connect(btn_8,&QPushButton::clicked,this, &autoresize::num8_btn);
    connect(btn_9,&QPushButton::clicked,this, &autoresize::num9_btn);
    connect(btn_0,&QPushButton::clicked,this, &autoresize::num0_btn);
    // clear button CE & C and backSpace
    connect(btn_C , &QPushButton::clicked,this, &autoresize::C_btn);
    connect(btn_CE , &QPushButton::clicked,this, &autoresize::CE_btn);
    connect(btn_delete,&QPushButton::clicked, this,&autoresize::delete_btn);
    //operation
    connect(btn_multi, &QPushButton::clicked, this,&autoresize::mulit_btn);
    connect(btn_divide ,&QPushButton::clicked, this,&autoresize::divide_btn);
    connect(btn_sub ,&QPushButton::clicked, this,&autoresize::subtract_btn);
    connect(btn_add, &QPushButton::clicked, this,&autoresize::add_btn);
    connect(btn_equal, &QPushButton::clicked, this, &autoresize::equal_btn);
    //negative and decimal 
    connect(btn_deci,&QPushButton::clicked,this, &autoresize::decimal_btn);
    connect(btn_neg,&QPushButton::clicked,this, &autoresize::neg_btn);
    
    //square and square root
    connect(btn_sqr,&QPushButton::clicked,this, &autoresize::square_btn);
    connect(btn_sqrt,&QPushButton::clicked,this, &autoresize::square_root_btn);

    //inverse
    connect(btn_inv,&QPushButton::clicked,this, &autoresize::inv_btn);
    
}


void autoresize::resizeEvent(QResizeEvent *event){
    //row 1
    btn_percent->setGeometry(0, height() * 0.30, width() * 0.25, height() * 0.116);
    btn_CE->setGeometry(width() * 0.25, height() * 0.30, width() * 0.25, height() * 0.116);
    btn_C->setGeometry(width() * 0.50, height() * 0.30, width() * 0.25, height() * 0.116);
    btn_delete->setGeometry(width() * 0.75, height() * 0.30, width() * 0.25, height() * 0.116);
    
    //row 2
    btn_inv->setGeometry(0,height()*0.416, width()*0.25, height()*0.116);
    btn_sqr->setGeometry(width()*0.25, height()*0.416, width()*0.25, height()*0.116);
    btn_sqrt->setGeometry(width()*0.50, height()*0.416, width()*0.25, height()*0.116);
    btn_divide->setGeometry(width()*0.75, height()*0.416, width()*0.25, height()*0.116);

    //row 3
    btn_7->setGeometry(0,height()*0.532, width()*0.25, height()*0.116);
    btn_8->setGeometry(width()*0.25, height()*0.532, width()*0.25, height()*0.116);
    btn_9->setGeometry(width()*0.50, height()*0.532, width()*0.25, height()*0.116);
    btn_multi->setGeometry(width()*0.75, height()*0.532, width()*0.25, height()*0.116);
    
    //row 4
    btn_4->setGeometry(0, height()*0.648, width()*0.25, height()*0.116);
    btn_5->setGeometry(width()*0.25, height()*0.648, width()*0.25, height()*0.116);
    btn_6->setGeometry(width()*0.50, height()*0.648, width()*0.25, height()*0.116);
    btn_sub->setGeometry(width()*0.75, height()*0.648, width()*0.25, height()*0.116);

    //row 5
    btn_1->setGeometry(0, height()*0.764, width()*0.25, height()*0.116);
    btn_2->setGeometry(width()*0.25, height()*0.764, width()*0.25, height()*0.116);
    btn_3->setGeometry(width()*0.50, height()*0.764, width()*0.25, height()*0.116);
    btn_add->setGeometry(width()*0.75,height()*0.764, width()*0.25, height()*0.116);
    
    //row 6
    btn_neg->setGeometry(0, height()*0.880, width()*0.25, height()*0.116);
    btn_0->setGeometry(width()*0.25, height()*0.880, width()*0.25, height()*0.116);
    btn_deci->setGeometry(width()*0.50, height()*0.880, width()*0.25, height()*0.116);
    btn_equal->setGeometry( width()*0.75,height()*0.880, width()*0.25, height()*0.116);
   
    //display the number from bottom right
    TT->setGeometry(0, 50, width(), height()/6);
    TT->setAlignment(Qt::AlignBottom|Qt::AlignRight);
    
    //small history display
    aboveDisplay->setStyleSheet("font-size: 14px; color: gray;");
    aboveDisplay->setGeometry(0, 25, width(), 30);
    aboveDisplay->setAlignment(Qt::AlignRight | Qt::AlignBottom);
    //number resize
    QLocale Us(QLocale::English, QLocale::UnitedStates);
    
    int baseFontSize;
    if(width()>400 && width() <500){
        baseFontSize = 35;
    }
    else if(width()>500){
        baseFontSize = 50;
    }
    else{
        baseFontSize =30;
    }
    int fontSize = qMin(baseFontSize, qMax(10, baseFontSize - (currentNum.length() - 10) * 1));
    TT->setStyleSheet("font-size: " + QString::number(fontSize) + "px;");

    if(!history_answer.isEmpty()){
    TT->setText(Us.toString(history_answer.last(), 'g', 16));
    
    }

    
    QWidget::resizeEvent(event);
    
}

//digit
void autoresize::Displaydigit(const QString &digit){
    // new number after operation
    if(startNewNumber ){
        currentNum.clear();
        startNewNumber  = false;
    }
    //displaying numbers
    if(currentNum.length() < 16){
        currentNum += digit;
        QLocale Us(QLocale::English, QLocale::UnitedStates);
        if(currentNum.contains('.'))
        {
                TT->setText(currentNum);
        } 
        
        else 
        {
            TT->setText(Us.toString(currentNum.toLongLong()));
        }
        int baseFontSize;
    if(width()>400){
        baseFontSize = 40;
    }
    else if(width()>500){
        baseFontSize = 50;
    }
    else{
        baseFontSize =35;
    }
        int fontSize = qMin(baseFontSize, qMax(10, baseFontSize - (currentNum.length() - 10) * 1));
        TT->setStyleSheet("font-size: " + QString::number(fontSize) + "px;");
    }
}





void autoresize::clickMeButton() {
    double currentNum_int = currentNum.toDouble();
    currentNum_int = currentNum_int * .01;
    currentNum.clear();
    currentNum.append(QString::number(currentNum_int));
    QLocale Us(QLocale::English, QLocale::UnitedStates);
    startNewNumber  = true;
    TT->setText(Us.toString(currentNum_int));
    
}
//num 0 - 9 
void autoresize::num1_btn(){
    Displaydigit("1");

}
void autoresize::num2_btn(){
   Displaydigit("2");
}
void autoresize::num3_btn(){

    Displaydigit("3");

}
void autoresize::num4_btn(){
    Displaydigit("4");
}

void autoresize::num5_btn(){
    Displaydigit("5");

}
void autoresize::num6_btn(){
    Displaydigit("6");

}
void autoresize::num7_btn(){
    Displaydigit("7");

}
void autoresize::num8_btn(){
    Displaydigit("8");

}
void autoresize::num9_btn(){
    Displaydigit("9");

}
void autoresize::num0_btn() {
    if (currentNum != "0") {
        Displaydigit("0");}
}
// C button
void autoresize::C_btn(){
    TT->clear();
    currentNum.clear();
    TT->setText(TT->text()+"0");
    aboveDisplay->clear();
}
//CE
void autoresize::CE_btn(){
    currentNum.clear();
    TT->setText("0");
}

//operation button
void autoresize::add_btn(){
    junk_history_ops.append("+");
    numbers_being_used.clear();
    ops.clear();
    numbers_being_used.append(currentNum.toDouble());
    ops.append("+");
    startNewNumber  = true;
    
    //display
    aboveDisplay_helper(QString::number(currentNum.toDouble()), " +");
    
}
void autoresize::mulit_btn(){
    junk_history_ops.append("*");
    numbers_being_used.clear();
    ops.clear();
    numbers_being_used.append(currentNum.toDouble());
    ops.append("*");
    startNewNumber  = true;
    
    //display
    aboveDisplay_helper(QString::number(currentNum.toDouble()), " *");


}
void autoresize::divide_btn(){
    junk_history_ops.append("÷");
    numbers_being_used.clear();
    ops.clear();
    numbers_being_used.append(currentNum.toDouble());
    ops.append("/");
    startNewNumber  = true;

    //display
    aboveDisplay_helper(QString::number(currentNum.toDouble()), " ÷");
    

}
void autoresize::subtract_btn(){
    junk_history_ops.append("-");
    numbers_being_used.clear();
    ops.clear();
    numbers_being_used.append(currentNum.toDouble());
    ops.append("-");
    startNewNumber  = true;

    //display
    aboveDisplay_helper(QString::number(currentNum.toDouble()), " -");
}
//equal
void autoresize::equal_btn(){
    if(ops.isEmpty() || numbers_being_used.isEmpty()){
        return;
    }

    if(ops.last() == "/" && currentNum.toDouble() == 0){
        TT->setText("Cannot divide by 0");
        return;
    }
    // save first and second before calculate clears 
    double firstNum = numbers_being_used[0];
    QString lastOp = ops.last();
    QString secondNum = currentNum;
    double result = calculate();

    //debug ignore line
    qDebug() << "result:" << result;

    history_answer.append(result);
    history_numbers_being_used.append(firstNum);
    history_numbers_being_used.append(secondNum.toDouble());
    history_ops.append(lastOp);

    QLocale Us(QLocale::English, QLocale::UnitedStates);
    int baseFontSize;

    if(width()>400 && width()<500) {baseFontSize = 35;}
    else if(width()>500) {baseFontSize = 50;}
    else {baseFontSize = 30;}

    int fontSize = qMin(baseFontSize, qMax(10, baseFontSize - (secondNum.length() - 10)));
    TT->setStyleSheet("font-size: " + QString::number(fontSize) + "px;");
    TT->setText(Us.toString(result, 'g', 16));

    aboveDisplay_helper(QString::number(firstNum) + " " + lastOp + " " + secondNum, "=");
    startNewNumber  = true;
}

//support method 

void autoresize::aboveDisplay_helper(const QString &num, const QString &op){
    aboveDisplay->setText(num + " " + op);
    aboveDisplay->setStyleSheet("font-size: 14px; color: gray;");
    aboveDisplay->setGeometry(0, 25, width(), 30);
    aboveDisplay->setAlignment(Qt::AlignRight | Qt::AlignBottom);
}



double autoresize::calculate(){
    qDebug() << "currentNum:" << currentNum;
    qDebug() << "numbers_being_used:" << numbers_being_used;
    qDebug() << "ops:" << ops;
    double display_Num;

    if(ops.isEmpty()) {
        return 0;
    }

    if(numbers_being_used.length() < 1){
        return 0;
    }
    
    numbers_being_used.append(currentNum.toDouble());
    
    if(numbers_being_used.length() < 2){
        return 0;
    }
    
    
    switch(ops.last().toStdString()[0]){
        case '+':
            display_Num = numbers_being_used[numbers_being_used.length()-2] + numbers_being_used[numbers_being_used.length()-1];
            break;

        case '-':
            display_Num = numbers_being_used[numbers_being_used.length()-2] - numbers_being_used[numbers_being_used.length()-1];
            break;

        case '*':
            display_Num = numbers_being_used[numbers_being_used.length()-2] * numbers_being_used[numbers_being_used.length()-1];
            break;
            
        case '/':
            display_Num = numbers_being_used[numbers_being_used.length()-2] / numbers_being_used[numbers_being_used.length()-1];
            break;
        }
        //debug ignore line
    qDebug() << "answer:" << display_Num;
    numbers_being_used.clear();
    ops.clear();
    currentNum.clear();
    currentNum.append(QString::number(display_Num));
    return display_Num;
}
//decimal button
void autoresize::decimal_btn(){
    if(startNewNumber){
        currentNum.clear();
        startNewNumber  = false;
    }

    if(!currentNum.contains(".")) {
        if(currentNum.isEmpty()) {
            currentNum = "0";
        }
        currentNum.append(".");
        TT->setText(currentNum);
    }

}

//negative button
void autoresize::neg_btn(){
    if(startNewNumber ){
        startNewNumber  = false;
    }
    double currentNum_int = currentNum.toDouble();
    currentNum_int = currentNum_int * -1;
    currentNum  =QString::number(currentNum_int);
    QLocale Us(QLocale::English, QLocale::UnitedStates);
    TT->setText(Us.toString(currentNum_int));
    
    if (!junk_history_ops.isEmpty()){
        aboveDisplay->setText(Us.toString(currentNum_int) + " " + junk_history_ops.last());
    }
    
}
void autoresize::delete_btn(){
    
    currentNum.chop(1);
    
    if(currentNum.isEmpty()) {
        currentNum = "0";}
    TT->setText(currentNum);
    qDebug() << "currentNum:" << currentNum;
}

void autoresize::square_btn(){
    if(currentNum.isEmpty()){
        TT->setText("0");
        return;
    }

    double currentNum_int = currentNum.toDouble();
    currentNum_int = currentNum_int * currentNum_int;
    currentNum.clear();
    currentNum.append(QString::number(currentNum_int));
    QLocale Us(QLocale::English, QLocale::UnitedStates);
    TT->setText(Us.toString(currentNum_int));
}

void autoresize::square_root_btn(){
    if(currentNum.isEmpty()){
        TT->setText("0");
        return;
    }

    double currentNum_int = currentNum.toDouble();
    currentNum_int = sqrt(currentNum_int);
    currentNum.clear();
    currentNum.append(QString::number(currentNum_int));
    QLocale Us(QLocale::English, QLocale::UnitedStates);
    TT->setText(Us.toString(currentNum_int, 'g', 16));
}

void autoresize::inv_btn(){
    
    if(currentNum == "0"){
        TT->setText("Cannot divide by 0");
        return;
    }
    else if(currentNum.isEmpty()){
        TT->setText("Cannot divide by 0");
        return;
    }
    double currentNum_int = currentNum.toDouble();
    currentNum_int = 1/currentNum_int;
    currentNum.clear();
    currentNum.append(QString::number(currentNum_int));
    QLocale Us(QLocale::English, QLocale::UnitedStates);
    TT->setText(Us.toString(currentNum_int, 'g', 16));
}
