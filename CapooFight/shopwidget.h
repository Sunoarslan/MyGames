#ifndef SHOPWIDGET_H
#define SHOPWIDGET_H

#include <QWidget>

namespace Ui {
class ShopWidget;
}

class ShopWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ShopWidget(QWidget *parent = nullptr);
    ~ShopWidget();
    void BackToInitialMenu();
    void SPEUP();
    void DEFUP();
private:
    Ui::ShopWidget *ui;
};

#endif // SHOPWIDGET_H
