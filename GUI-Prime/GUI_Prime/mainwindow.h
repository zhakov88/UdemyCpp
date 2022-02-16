#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void compute();

private:
    Ui::MainWindow *ui;
    QPushButton *m_calc_button;
    QLineEdit *m_input_edit;
    QLineEdit *m_output_edit;
};
#endif // MAINWINDOW_H
