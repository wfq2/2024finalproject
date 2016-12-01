/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *horizontalSlider;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QRadioButton *lessButton;
    QRadioButton *moreButton;
    QRadioButton *mostButton;
    QCheckBox *checkBox;
    QPushButton *submitButton;
    QMenuBar *menuBar;
    QMenu *menuTest_Case_Builder;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 314);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 171, 241));
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 171, 241));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(190, 16, 205, 231));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(1000);
        horizontalSlider->setSingleStep(10);
        horizontalSlider->setPageStep(100);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(50);

        verticalLayout_2->addWidget(horizontalSlider);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lessButton = new QRadioButton(widget);
        lessButton->setObjectName(QStringLiteral("lessButton"));
        lessButton->setChecked(true);

        horizontalLayout->addWidget(lessButton);

        moreButton = new QRadioButton(widget);
        moreButton->setObjectName(QStringLiteral("moreButton"));

        horizontalLayout->addWidget(moreButton);

        mostButton = new QRadioButton(widget);
        mostButton->setObjectName(QStringLiteral("mostButton"));

        horizontalLayout->addWidget(mostButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_2->addWidget(checkBox);

        submitButton = new QPushButton(widget);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        verticalLayout_2->addWidget(submitButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuTest_Case_Builder = new QMenu(menuBar);
        menuTest_Case_Builder->setObjectName(QStringLiteral("menuTest_Case_Builder"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTest_Case_Builder->menuAction());
        menuTest_Case_Builder->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label_3, SLOT(setNum(int)));
        QObject::connect(submitButton, SIGNAL(clicked()), textBrowser, SLOT(paste()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_2->setText(QApplication::translate("MainWindow", "Number of Test Cases:", 0));
        label_3->setText(QApplication::translate("MainWindow", "0", 0));
        label->setText(QApplication::translate("MainWindow", "Forwarding Level:", 0));
        lessButton->setText(QApplication::translate("MainWindow", "Less", 0));
        moreButton->setText(QApplication::translate("MainWindow", "More", 0));
        mostButton->setText(QApplication::translate("MainWindow", "Most", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Include L/S Instructions", 0));
        submitButton->setText(QApplication::translate("MainWindow", "Create Test Cases", 0));
        menuTest_Case_Builder->setTitle(QApplication::translate("MainWindow", "Test Case Builder", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
