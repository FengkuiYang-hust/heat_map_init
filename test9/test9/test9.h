#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test9.h"

class test9 : public QMainWindow
{
	Q_OBJECT

public:
	test9(QWidget *parent = Q_NULLPTR);

private:
	Ui::test9Class ui;
};
