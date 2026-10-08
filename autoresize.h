#ifndef AUTO_H
#define AUTO_H
#include <QWidget>
#include <QPushButton>
#include <QResizeEvent>

#include <QLabel>
#include <cmath>
class autoresize : public QWidget{
    Q_OBJECT 
    public:
    autoresize();
    
    public slots:
    //clear button C & CE and delete
    void delete_btn();
    void C_btn();
    void CE_btn();
    void clickMeButton();
    //buton 0-9
    void num1_btn();
    void num2_btn();
    void num3_btn();
    void num4_btn();
    void num5_btn();
    void num6_btn();    
    void num7_btn();
    void num8_btn();    
    void num9_btn();
    void num0_btn();
    // operation
    void mulit_btn();
    void divide_btn();
    void subtract_btn();
    void add_btn();
    void equal_btn();

    //negative and decimal button
    void decimal_btn();
    void neg_btn();
    //square and square root
    void square_btn();
    void square_root_btn();
    
    // one over x
    void inv_btn();
    protected:
    void resizeEvent(QResizeEvent *event) override;
    
    private:
    //row1
    QPushButton *btn_percent;
    QPushButton *btn_CE;
    QPushButton *btn_C;
    QPushButton *btn_delete;
    //row2
    QPushButton *btn_inv;
    QPushButton *btn_sqr;
    QPushButton *btn_sqrt;
    QPushButton *btn_divide;
    //row 3
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_multi;
    //row4
    QPushButton *btn_4;       
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_sub;
    //row 5
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_add;

    //row 6
    QPushButton *btn_neg;
    QPushButton *btn_0;    
    QPushButton *btn_deci;    
    QPushButton *btn_equal;

    //helper method
    double calculate();
    void Displaydigit(const QString &digit);
    void aboveDisplay_helper(const QString &num, const QString &op);
    //window 
    
    QLabel *TT;
    QLabel *aboveDisplay;
    // number after operation
    bool startNewNumber  = false;
    // inverse
    
    //calculating
    QVector<QString> ops;
    QVector<double> numbers_being_used;
    QString currentNum;
    //history
    QVector<double> history_numbers_being_used;
    QVector<QString> history_ops;
    QVector<double> history_answer;
    QVector<QString> junk_history_ops;
    //small display history
    
};






#endif