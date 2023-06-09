#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum Operation
{
    NOPE = 0,
    PLUS,
    MINUS,
    MULT,
    DIV
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    /**
     * @brief Функция нажатия на клавишу 1
     */
    void on_Button_1_clicked();

    /**
     * @brief Функция нажатия на клавишу 2
     */
    void on_Button_2_clicked();

    /**
     * @brief Функция нажатия на клавишу 3
     */
    void on_Button_3_clicked();

    /**
     * @brief Функция нажатия на клавишу 4
     */
    void on_Button_4_clicked();

    /**
     * @brief Функция нажатия на клавишу 5
     */
    void on_Button_5_clicked();

    /**
     * @brief Функция нажатия на клавишу 6
     */
    void on_Button_6_clicked();

    /**
     * @brief Функция нажатия на клавишу 7
     */
    void on_Button_7_clicked();

    /**
     * @brief Функция нажатия на клавишу 8
     */
    void on_Button_8_clicked();

    /**
     * @brief Функция нажатия на клавишу 9
     */
    void on_Button_9_clicked();

    /**
     * @brief Функция нажатия на клавишу 0
     */
    void on_Button_0_clicked();

    /**
     * @brief Функция удаления последнего элемента на экране
     */
    void on_B_Backspace_clicked();
    /**
     * @brief Функция полной очистки экрана
     */
    void on_B_Clear_clicked();

    /**
     * @brief Функция полной очистки. О
     * бнуляет экран, число в основной памяти и оператор
     */
    void on_B_Clear_All_clicked();

    /**
     * @brief Функция нажатия на клавишу +.
     * Устанавливает оператор сложения в качестве активного
     */
    void on_B_plus_clicked();

    /**
     * @brief Функция нажатия на клавишу -.
     * Устанавливает оператор вычитания в качестве активного
     */
    void on_B_sub_clicked();

    /**
     * @brief Функция нажатия на клавишу *.
     * Устанавливает оператор умножения в качестве активного
     */
    void on_B_mult_clicked();

    /**
     * @brief Функция нажатия на клавишу /.
     * Устанавливает оператор деления в качестве активного
     */
    void on_B_div_clicked();

    /**
     * @brief Функция нажатия на клавишу =.
     * Выводит на экран результат применения выбранной операции
     */
    void on_B_res_clicked();

    /**
     * @brief Функция нажатия на клавишу инверсии числа.
     * Заменяет число на экране обратным к нему
     */
    void on_B_inv_clicked();

    /**
     * @brief Функция нажатия на клавишу квадратной степени.
     * Заменяет число на экране его квадратом
     */
    void on_B_Sqr_clicked();

    /**
     * @brief Функция нажатия на клавишу квадратного корня.
     * Заменяет число на экране корнем из него, если такой существует.
     * Выводит на экран Error, если корня не существует
     */
    void on_B_Sqrt_clicked();

    /**
     * @brief Функция нажатия на клавишу смены знака числа.
     * Меняет знак числа на экране на противоположный
     */
    void on_B_change_m_clicked();

    /**
     * @brief Функция нажатия на клавишу точки.
     * Добавляет к числу на экране точку,
     * что позволяет перейти к введению десятичной части числа
     */
    void on_B_point_clicked();

    /**
     * @brief Функция очистки дополнительной памяти
    */
    void on_B_MC_clicked();

    /**
     * @brief Функция восстановления числа из дополнительной памяти.
     * Заменяет число на экране числом из дополнительной памяти
     */
    void on_B_MR_clicked();

    /**
     * @brief Функция сохранения числа в дополнительную память.
     * Сохраняет число из основной пямяти в дополнительную память
     */
    void on_B_MS_clicked();

    /**
     * @brief Функция добавления числа на экране к числу в дополнительной памяти.
     * При добавлении число с экрана стирается
     */
    void on_B_MAdd_clicked();

private:
    /**
     * @brief Функция обновления экрана
     */
    void display_res();

    /**
     * @brief Функция вычисления результата операции выбранного оператора
     */
    void do_ar_op();

private:
    Ui::MainWindow *ui;
    /**
     * @brief Переменная, значение которой эквивалентно значению экрана (искл.: Error == 0)
     */
    QString m_display = "";

    /**
     * @brief Переменная для хранения текущего выбранного оператора
     */
    Operation m_temp_op = NOPE;

    /**
     * @brief Переменная основной памяти
     */
    double m_answer = 0;

    /**
     * @brief Переменная дополнительной памяти
     */
    double m_memory_slot = 0;
};
#endif // MAINWINDOW_H
