/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <vectorlist.h>
#include "imagelist.h"
#include "pivdisplay.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *menuTab;
    QWidget *homeTab;
    QGridLayout *gridLayout_11;
    QToolButton *newSession;
    QToolButton *openSession;
    QToolButton *saveSession;
    QFrame *line_13;
    QGridLayout *gridLayout_10;
    QLabel *label_40;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout;
    QLabel *label_43;
    QLabel *sessionLabel;
    QFrame *line_9;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QWidget *startTab;
    QGridLayout *gridLayout_7;
    QToolButton *importButton;
    QToolButton *maskButton;
    QFrame *line;
    QToolButton *correlateButton;
    QToolButton *filterButton;
    QFrame *line_2;
    QToolButton *batchButton;
    QFrame *line_14;
    QGridLayout *gridLayout_6;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *outputFolderEdit;
    QToolButton *outputFolderButton;
    QLabel *label_36;
    QComboBox *outputFormatCombo;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer;
    QWidget *viewTab;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QToolButton *zoomInButton;
    QToolButton *zoomOutButton;
    QToolButton *zoomFitButton;
    QToolButton *lutButton;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QCheckBox *vectorToggle;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QDoubleSpinBox *scaleSpin;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QDoubleSpinBox *subSpin;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_32;
    QSpacerItem *horizontalSpacer_9;
    QFrame *line_8;
    QLabel *label_31;
    QToolButton *colourButtonUnfiltered;
    QLabel *label_33;
    QToolButton *colourButtonFiltered;
    QSpacerItem *horizontalSpacer_2;
    QWidget *correlationTab;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QFrame *line_3;
    QLabel *label_6;
    QComboBox *crossCorrCombo;
    QLabel *label_3;
    QComboBox *hSizeCombo;
    QLabel *label;
    QSpinBox *hSpaceSpin;
    QLabel *label_7;
    QComboBox *interpolateCombo;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QComboBox *vSizeCombo;
    QLabel *label_5;
    QSpinBox *vSpaceSpin;
    QWidget *tab;
    QGridLayout *gridLayout_20;
    QGridLayout *gridLayout_9;
    QLabel *label_37;
    QSpacerItem *horizontalSpacer_16;
    QCheckBox *filterSNRCheck;
    QLineEdit *snrEdit;
    QFrame *line_10;
    QGridLayout *gridLayout_12;
    QLabel *label_41;
    QSpacerItem *horizontalSpacer_17;
    QCheckBox *filterIntCheck;
    QLineEdit *intensityEdit;
    QFrame *line_12;
    QLabel *label_38;
    QFrame *line_11;
    QLabel *label_42;
    QToolButton *corrMapPickButton;
    QToolButton *histButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QWidget *filterTab;
    QGridLayout *gridLayout_19;
    QGridLayout *gridLayout_16;
    QLabel *label_13;
    QGridLayout *gridLayout_5;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *minUedit;
    QLineEdit *maxUedit;
    QLineEdit *minVedit;
    QLineEdit *maxVedit;
    QCheckBox *globalRangeCheck;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *globalStDevCheck;
    QDoubleSpinBox *nStdDevSpin;
    QLabel *label_18;
    QFrame *line_5;
    QGridLayout *gridLayout_18;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_19;
    QCheckBox *localCheck;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_18;
    QComboBox *localMethodCombo;
    QLabel *label_23;
    QLineEdit *localUedit;
    QLabel *label_21;
    QComboBox *localNxNCombo;
    QLabel *label_24;
    QLineEdit *localVedit;
    QFrame *line_6;
    QGridLayout *gridLayout_15;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_25;
    QCheckBox *interpolateCheck;
    QGridLayout *gridLayout_14;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_13;
    QComboBox *interpolateMethodCombo;
    QLabel *label_27;
    QComboBox *interpolateNxNCombo;
    QFrame *line_7;
    QGridLayout *gridLayout_17;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_28;
    QCheckBox *smoothCheck;
    QGridLayout *gridLayout_4;
    QLabel *label_29;
    QComboBox *smoothNxNCombo;
    QLabel *label_30;
    QLineEdit *smoothRadiusEdit;
    QSpacerItem *horizontalSpacer_8;
    QWidget *helpTab;
    QGridLayout *gridLayout_13;
    QToolButton *helpButton;
    QToolButton *tutorialsButton;
    QToolButton *aboutButton;
    QSpacerItem *horizontalSpacer_12;
    QSplitter *splitter;
    QTabWidget *listTab;
    QWidget *imageListTab;
    QVBoxLayout *verticalLayout_3;
    QLabel *aLabel;
    ImageList *aListWidget;
    QLabel *bLabel;
    ImageList *bListWidget;
    QWidget *dataTab;
    QGridLayout *gridLayout_8;
    QLabel *aLabel_2;
    VectorList *vectorListWidget;
    QTabWidget *displayTab;
    QWidget *imageDispTab;
    QGridLayout *gridLayout;
    QLabel *label_39;
    QPushButton *backButton;
    QPushButton *forwardButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *positionLabel;
    PivDisplay *pivDisplay;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1071, 837);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/openpiv.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        menuTab = new QTabWidget(centralWidget);
        menuTab->setObjectName(QStringLiteral("menuTab"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(menuTab->sizePolicy().hasHeightForWidth());
        menuTab->setSizePolicy(sizePolicy1);
        menuTab->setMinimumSize(QSize(0, 0));
        menuTab->setMaximumSize(QSize(16777215, 16777215));
        menuTab->setTabPosition(QTabWidget::North);
        menuTab->setTabShape(QTabWidget::Rounded);
        menuTab->setIconSize(QSize(16, 16));
        menuTab->setDocumentMode(false);
        homeTab = new QWidget();
        homeTab->setObjectName(QStringLiteral("homeTab"));
        gridLayout_11 = new QGridLayout(homeTab);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        newSession = new QToolButton(homeTab);
        newSession->setObjectName(QStringLiteral("newSession"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(newSession->sizePolicy().hasHeightForWidth());
        newSession->setSizePolicy(sizePolicy2);
        newSession->setMinimumSize(QSize(90, 60));
        newSession->setMaximumSize(QSize(90, 60));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        newSession->setIcon(icon1);
        newSession->setIconSize(QSize(25, 25));
        newSession->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        newSession->setAutoRaise(true);

        gridLayout_11->addWidget(newSession, 0, 0, 2, 1);

        openSession = new QToolButton(homeTab);
        openSession->setObjectName(QStringLiteral("openSession"));
        sizePolicy2.setHeightForWidth(openSession->sizePolicy().hasHeightForWidth());
        openSession->setSizePolicy(sizePolicy2);
        openSession->setMinimumSize(QSize(100, 60));
        openSession->setMaximumSize(QSize(100, 64));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        openSession->setIcon(icon2);
        openSession->setIconSize(QSize(25, 25));
        openSession->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        openSession->setAutoRaise(true);

        gridLayout_11->addWidget(openSession, 0, 1, 2, 1);

        saveSession = new QToolButton(homeTab);
        saveSession->setObjectName(QStringLiteral("saveSession"));
        sizePolicy2.setHeightForWidth(saveSession->sizePolicy().hasHeightForWidth());
        saveSession->setSizePolicy(sizePolicy2);
        saveSession->setMinimumSize(QSize(100, 60));
        saveSession->setMaximumSize(QSize(100, 64));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/filesaveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveSession->setIcon(icon3);
        saveSession->setIconSize(QSize(25, 25));
        saveSession->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        saveSession->setAutoRaise(true);

        gridLayout_11->addWidget(saveSession, 0, 2, 2, 1);

        line_13 = new QFrame(homeTab);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout_11->addWidget(line_13, 0, 3, 2, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setVerticalSpacing(0);
        label_40 = new QLabel(homeTab);
        label_40->setObjectName(QStringLiteral("label_40"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_40->setFont(font);

        gridLayout_10->addWidget(label_40, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_10, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_43 = new QLabel(homeTab);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setMinimumSize(QSize(0, 20));

        horizontalLayout->addWidget(label_43);

        sessionLabel = new QLabel(homeTab);
        sessionLabel->setObjectName(QStringLiteral("sessionLabel"));
        sessionLabel->setMinimumSize(QSize(300, 20));

        horizontalLayout->addWidget(sessionLabel);


        gridLayout_10->addLayout(horizontalLayout, 1, 0, 1, 2);


        gridLayout_11->addLayout(gridLayout_10, 0, 4, 1, 1);

        line_9 = new QFrame(homeTab);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout_11->addWidget(line_9, 0, 5, 2, 1);

        horizontalSpacer_7 = new QSpacerItem(340, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_7, 0, 6, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_5, 1, 4, 1, 1);

        menuTab->addTab(homeTab, QString());
        startTab = new QWidget();
        startTab->setObjectName(QStringLiteral("startTab"));
        gridLayout_7 = new QGridLayout(startTab);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        importButton = new QToolButton(startTab);
        importButton->setObjectName(QStringLiteral("importButton"));
        sizePolicy2.setHeightForWidth(importButton->sizePolicy().hasHeightForWidth());
        importButton->setSizePolicy(sizePolicy2);
        importButton->setMinimumSize(QSize(100, 60));
        importButton->setMaximumSize(QSize(100, 60));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/import_image.png"), QSize(), QIcon::Normal, QIcon::Off);
        importButton->setIcon(icon4);
        importButton->setIconSize(QSize(25, 25));
        importButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        importButton->setAutoRaise(true);

        gridLayout_7->addWidget(importButton, 0, 0, 1, 1);

        maskButton = new QToolButton(startTab);
        maskButton->setObjectName(QStringLiteral("maskButton"));
        sizePolicy2.setHeightForWidth(maskButton->sizePolicy().hasHeightForWidth());
        maskButton->setSizePolicy(sizePolicy2);
        maskButton->setMinimumSize(QSize(80, 60));
        maskButton->setMaximumSize(QSize(80, 60));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/image_mask.png"), QSize(), QIcon::Normal, QIcon::Off);
        maskButton->setIcon(icon5);
        maskButton->setIconSize(QSize(25, 25));
        maskButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        maskButton->setAutoRaise(true);

        gridLayout_7->addWidget(maskButton, 0, 1, 1, 1);

        line = new QFrame(startTab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line, 0, 2, 1, 1);

        correlateButton = new QToolButton(startTab);
        correlateButton->setObjectName(QStringLiteral("correlateButton"));
        sizePolicy2.setHeightForWidth(correlateButton->sizePolicy().hasHeightForWidth());
        correlateButton->setSizePolicy(sizePolicy2);
        correlateButton->setMinimumSize(QSize(70, 60));
        correlateButton->setMaximumSize(QSize(70, 60));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/correlate.png"), QSize(), QIcon::Normal, QIcon::Off);
        correlateButton->setIcon(icon6);
        correlateButton->setIconSize(QSize(28, 28));
        correlateButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        correlateButton->setAutoRaise(true);

        gridLayout_7->addWidget(correlateButton, 0, 3, 1, 1);

        filterButton = new QToolButton(startTab);
        filterButton->setObjectName(QStringLiteral("filterButton"));
        sizePolicy2.setHeightForWidth(filterButton->sizePolicy().hasHeightForWidth());
        filterButton->setSizePolicy(sizePolicy2);
        filterButton->setMinimumSize(QSize(70, 60));
        filterButton->setMaximumSize(QSize(70, 60));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/filter.png"), QSize(), QIcon::Normal, QIcon::Off);
        filterButton->setIcon(icon7);
        filterButton->setIconSize(QSize(25, 25));
        filterButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        filterButton->setAutoRaise(true);

        gridLayout_7->addWidget(filterButton, 0, 4, 1, 1);

        line_2 = new QFrame(startTab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line_2, 0, 5, 1, 1);

        batchButton = new QToolButton(startTab);
        batchButton->setObjectName(QStringLiteral("batchButton"));
        sizePolicy2.setHeightForWidth(batchButton->sizePolicy().hasHeightForWidth());
        batchButton->setSizePolicy(sizePolicy2);
        batchButton->setMinimumSize(QSize(100, 60));
        batchButton->setMaximumSize(QSize(78, 60));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/kcmsystem.png"), QSize(), QIcon::Normal, QIcon::Off);
        batchButton->setIcon(icon8);
        batchButton->setIconSize(QSize(28, 28));
        batchButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        batchButton->setAutoRaise(true);

        gridLayout_7->addWidget(batchButton, 0, 6, 1, 1);

        line_14 = new QFrame(startTab);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line_14, 0, 7, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_34 = new QLabel(startTab);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setMaximumSize(QSize(16777215, 20));
        label_34->setFont(font);

        gridLayout_6->addWidget(label_34, 0, 0, 1, 1);

        label_35 = new QLabel(startTab);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_6->addWidget(label_35, 1, 0, 1, 1);

        outputFolderEdit = new QLineEdit(startTab);
        outputFolderEdit->setObjectName(QStringLiteral("outputFolderEdit"));
        outputFolderEdit->setMinimumSize(QSize(250, 24));

        gridLayout_6->addWidget(outputFolderEdit, 1, 1, 1, 2);

        outputFolderButton = new QToolButton(startTab);
        outputFolderButton->setObjectName(QStringLiteral("outputFolderButton"));
        outputFolderButton->setMinimumSize(QSize(25, 20));
        outputFolderButton->setMaximumSize(QSize(25, 20));

        gridLayout_6->addWidget(outputFolderButton, 1, 3, 1, 1);

        label_36 = new QLabel(startTab);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setMinimumSize(QSize(50, 20));

        gridLayout_6->addWidget(label_36, 2, 0, 1, 1);

        outputFormatCombo = new QComboBox(startTab);
        outputFormatCombo->setObjectName(QStringLiteral("outputFormatCombo"));
        outputFormatCombo->setMinimumSize(QSize(100, 20));

        gridLayout_6->addWidget(outputFormatCombo, 2, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 2, 2, 1, 2);


        gridLayout_7->addLayout(gridLayout_6, 0, 8, 1, 1);

        horizontalSpacer = new QSpacerItem(163, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 9, 1, 1);

        menuTab->addTab(startTab, QString());
        viewTab = new QWidget();
        viewTab->setObjectName(QStringLiteral("viewTab"));
        gridLayout_3 = new QGridLayout(viewTab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_11 = new QLabel(viewTab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(0, 18));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        zoomInButton = new QToolButton(viewTab);
        zoomInButton->setObjectName(QStringLiteral("zoomInButton"));
        sizePolicy2.setHeightForWidth(zoomInButton->sizePolicy().hasHeightForWidth());
        zoomInButton->setSizePolicy(sizePolicy2);
        zoomInButton->setMinimumSize(QSize(70, 50));
        zoomInButton->setMaximumSize(QSize(50, 50));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/viewmag+.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomInButton->setIcon(icon9);
        zoomInButton->setIconSize(QSize(25, 25));
        zoomInButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        zoomInButton->setAutoRaise(true);

        gridLayout_3->addWidget(zoomInButton, 1, 0, 3, 1);

        zoomOutButton = new QToolButton(viewTab);
        zoomOutButton->setObjectName(QStringLiteral("zoomOutButton"));
        sizePolicy2.setHeightForWidth(zoomOutButton->sizePolicy().hasHeightForWidth());
        zoomOutButton->setSizePolicy(sizePolicy2);
        zoomOutButton->setMinimumSize(QSize(70, 50));
        zoomOutButton->setMaximumSize(QSize(55, 50));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/viewmag-.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomOutButton->setIcon(icon10);
        zoomOutButton->setIconSize(QSize(25, 25));
        zoomOutButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        zoomOutButton->setAutoRaise(true);

        gridLayout_3->addWidget(zoomOutButton, 1, 1, 3, 1);

        zoomFitButton = new QToolButton(viewTab);
        zoomFitButton->setObjectName(QStringLiteral("zoomFitButton"));
        sizePolicy2.setHeightForWidth(zoomFitButton->sizePolicy().hasHeightForWidth());
        zoomFitButton->setSizePolicy(sizePolicy2);
        zoomFitButton->setMinimumSize(QSize(70, 50));
        zoomFitButton->setMaximumSize(QSize(50, 50));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icons/viewmagfit.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomFitButton->setIcon(icon11);
        zoomFitButton->setIconSize(QSize(25, 25));
        zoomFitButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        zoomFitButton->setAutoRaise(true);

        gridLayout_3->addWidget(zoomFitButton, 1, 2, 3, 1);

        lutButton = new QToolButton(viewTab);
        lutButton->setObjectName(QStringLiteral("lutButton"));
        lutButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(lutButton->sizePolicy().hasHeightForWidth());
        lutButton->setSizePolicy(sizePolicy2);
        lutButton->setMinimumSize(QSize(70, 50));
        lutButton->setMaximumSize(QSize(50, 50));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icons/LUT.png"), QSize(), QIcon::Normal, QIcon::Off);
        lutButton->setIcon(icon12);
        lutButton->setIconSize(QSize(25, 25));
        lutButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        lutButton->setAutoRaise(true);

        gridLayout_3->addWidget(lutButton, 1, 3, 3, 1);

        line_4 = new QFrame(viewTab);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 0, 4, 4, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_8 = new QLabel(viewTab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(16777215, 20));
        label_8->setFont(font);

        horizontalLayout_10->addWidget(label_8);

        horizontalSpacer_15 = new QSpacerItem(14, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_15);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(viewTab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 20));
        label_9->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_8->addWidget(label_9);

        vectorToggle = new QCheckBox(viewTab);
        vectorToggle->setObjectName(QStringLiteral("vectorToggle"));
        vectorToggle->setMinimumSize(QSize(0, 20));
        vectorToggle->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_8->addWidget(vectorToggle);


        horizontalLayout_10->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(horizontalLayout_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_10 = new QLabel(viewTab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(80, 22));
        label_10->setMaximumSize(QSize(80, 22));

        horizontalLayout_7->addWidget(label_10);

        scaleSpin = new QDoubleSpinBox(viewTab);
        scaleSpin->setObjectName(QStringLiteral("scaleSpin"));
        scaleSpin->setMinimumSize(QSize(75, 22));
        scaleSpin->setMaximumSize(QSize(70, 22));
        scaleSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scaleSpin->setDecimals(1);

        horizontalLayout_7->addWidget(scaleSpin);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_12 = new QLabel(viewTab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(80, 22));
        label_12->setMaximumSize(QSize(80, 22));

        horizontalLayout_3->addWidget(label_12);

        subSpin = new QDoubleSpinBox(viewTab);
        subSpin->setObjectName(QStringLiteral("subSpin"));
        subSpin->setMinimumSize(QSize(75, 22));
        subSpin->setMaximumSize(QSize(70, 22));
        subSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        subSpin->setDecimals(1);
        subSpin->setMinimum(-100);

        horizontalLayout_3->addWidget(subSpin);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout);


        gridLayout_3->addLayout(verticalLayout_4, 0, 5, 4, 1);

        horizontalSpacer_11 = new QSpacerItem(13, 53, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_11, 0, 6, 4, 1);

        label_32 = new QLabel(viewTab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMaximumSize(QSize(16777215, 20));

        gridLayout_3->addWidget(label_32, 0, 7, 2, 1);

        horizontalSpacer_9 = new QSpacerItem(49, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 0, 8, 2, 2);

        line_8 = new QFrame(viewTab);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_8, 0, 10, 4, 1);

        label_31 = new QLabel(viewTab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setMinimumSize(QSize(70, 0));

        gridLayout_3->addWidget(label_31, 2, 7, 1, 2);

        colourButtonUnfiltered = new QToolButton(viewTab);
        colourButtonUnfiltered->setObjectName(QStringLiteral("colourButtonUnfiltered"));
        colourButtonUnfiltered->setMinimumSize(QSize(18, 18));
        colourButtonUnfiltered->setMaximumSize(QSize(18, 18));

        gridLayout_3->addWidget(colourButtonUnfiltered, 2, 9, 1, 1);

        label_33 = new QLabel(viewTab);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_3->addWidget(label_33, 3, 7, 1, 1);

        colourButtonFiltered = new QToolButton(viewTab);
        colourButtonFiltered->setObjectName(QStringLiteral("colourButtonFiltered"));
        colourButtonFiltered->setMinimumSize(QSize(18, 18));
        colourButtonFiltered->setMaximumSize(QSize(18, 18));

        gridLayout_3->addWidget(colourButtonFiltered, 3, 9, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(468, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 3, 11, 1, 1);

        menuTab->addTab(viewTab, QString());
        correlationTab = new QWidget();
        correlationTab->setObjectName(QStringLiteral("correlationTab"));
        gridLayout_2 = new QGridLayout(correlationTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(correlationTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 2);

        line_3 = new QFrame(correlationTab);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 0, 4, 3, 1);

        label_6 = new QLabel(correlationTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(140, 22));
        label_6->setFont(font);

        gridLayout_2->addWidget(label_6, 0, 5, 1, 1);

        crossCorrCombo = new QComboBox(correlationTab);
        crossCorrCombo->setObjectName(QStringLiteral("crossCorrCombo"));
        crossCorrCombo->setMinimumSize(QSize(180, 22));

        gridLayout_2->addWidget(crossCorrCombo, 0, 6, 1, 1);

        label_3 = new QLabel(correlationTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(120, 22));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        hSizeCombo = new QComboBox(correlationTab);
        hSizeCombo->setObjectName(QStringLiteral("hSizeCombo"));
        hSizeCombo->setMinimumSize(QSize(85, 22));

        gridLayout_2->addWidget(hSizeCombo, 1, 1, 1, 1);

        label = new QLabel(correlationTab);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(135, 22));

        gridLayout_2->addWidget(label, 1, 2, 1, 1);

        hSpaceSpin = new QSpinBox(correlationTab);
        hSpaceSpin->setObjectName(QStringLiteral("hSpaceSpin"));
        hSpaceSpin->setMinimumSize(QSize(60, 22));

        gridLayout_2->addWidget(hSpaceSpin, 1, 3, 1, 1);

        label_7 = new QLabel(correlationTab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(140, 22));
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 1, 5, 1, 1);

        interpolateCombo = new QComboBox(correlationTab);
        interpolateCombo->setObjectName(QStringLiteral("interpolateCombo"));
        interpolateCombo->setMinimumSize(QSize(180, 22));

        gridLayout_2->addWidget(interpolateCombo, 1, 6, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(286, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 7, 1, 1);

        label_4 = new QLabel(correlationTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(120, 22));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        vSizeCombo = new QComboBox(correlationTab);
        vSizeCombo->setObjectName(QStringLiteral("vSizeCombo"));
        vSizeCombo->setMinimumSize(QSize(85, 22));

        gridLayout_2->addWidget(vSizeCombo, 2, 1, 1, 1);

        label_5 = new QLabel(correlationTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(135, 22));

        gridLayout_2->addWidget(label_5, 2, 2, 1, 1);

        vSpaceSpin = new QSpinBox(correlationTab);
        vSpaceSpin->setObjectName(QStringLiteral("vSpaceSpin"));
        vSpaceSpin->setMinimumSize(QSize(60, 22));

        gridLayout_2->addWidget(vSpaceSpin, 2, 3, 1, 1);

        menuTab->addTab(correlationTab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_20 = new QGridLayout(tab);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_37 = new QLabel(tab);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setMinimumSize(QSize(0, 20));
        label_37->setFont(font);

        gridLayout_9->addWidget(label_37, 0, 0, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_16, 0, 1, 1, 1);

        filterSNRCheck = new QCheckBox(tab);
        filterSNRCheck->setObjectName(QStringLiteral("filterSNRCheck"));
        filterSNRCheck->setMinimumSize(QSize(0, 24));
        filterSNRCheck->setMaximumSize(QSize(16777215, 24));

        gridLayout_9->addWidget(filterSNRCheck, 1, 0, 1, 1);

        snrEdit = new QLineEdit(tab);
        snrEdit->setObjectName(QStringLiteral("snrEdit"));
        snrEdit->setMinimumSize(QSize(60, 24));
        snrEdit->setMaximumSize(QSize(60, 16777215));
        snrEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(snrEdit, 1, 1, 1, 1);


        gridLayout_20->addLayout(gridLayout_9, 0, 0, 2, 1);

        line_10 = new QFrame(tab);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout_20->addWidget(line_10, 0, 1, 3, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_41 = new QLabel(tab);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setMinimumSize(QSize(0, 20));
        label_41->setFont(font);

        gridLayout_12->addWidget(label_41, 0, 0, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_17, 0, 1, 1, 1);

        filterIntCheck = new QCheckBox(tab);
        filterIntCheck->setObjectName(QStringLiteral("filterIntCheck"));
        filterIntCheck->setMinimumSize(QSize(0, 24));
        filterIntCheck->setMaximumSize(QSize(16777215, 24));

        gridLayout_12->addWidget(filterIntCheck, 1, 0, 1, 1);

        intensityEdit = new QLineEdit(tab);
        intensityEdit->setObjectName(QStringLiteral("intensityEdit"));
        intensityEdit->setMinimumSize(QSize(60, 24));
        intensityEdit->setMaximumSize(QSize(60, 24));
        intensityEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_12->addWidget(intensityEdit, 1, 1, 1, 1);


        gridLayout_20->addLayout(gridLayout_12, 0, 2, 2, 1);

        line_12 = new QFrame(tab);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout_20->addWidget(line_12, 0, 3, 3, 1);

        label_38 = new QLabel(tab);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setMinimumSize(QSize(0, 20));
        label_38->setFont(font);

        gridLayout_20->addWidget(label_38, 0, 4, 1, 1);

        line_11 = new QFrame(tab);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout_20->addWidget(line_11, 0, 5, 3, 1);

        label_42 = new QLabel(tab);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setMinimumSize(QSize(0, 20));
        label_42->setFont(font);

        gridLayout_20->addWidget(label_42, 0, 6, 1, 1);

        corrMapPickButton = new QToolButton(tab);
        corrMapPickButton->setObjectName(QStringLiteral("corrMapPickButton"));
        corrMapPickButton->setEnabled(false);
        corrMapPickButton->setMinimumSize(QSize(70, 50));
        corrMapPickButton->setMaximumSize(QSize(70, 50));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icons/edit-node.png"), QSize(), QIcon::Normal, QIcon::Off);
        corrMapPickButton->setIcon(icon13);
        corrMapPickButton->setIconSize(QSize(25, 25));
        corrMapPickButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        corrMapPickButton->setAutoRaise(true);

        gridLayout_20->addWidget(corrMapPickButton, 1, 4, 2, 1);

        histButton = new QToolButton(tab);
        histButton->setObjectName(QStringLiteral("histButton"));
        histButton->setEnabled(false);
        histButton->setMinimumSize(QSize(70, 50));
        histButton->setMaximumSize(QSize(70, 50));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/icons/hist.png"), QSize(), QIcon::Normal, QIcon::Off);
        histButton->setIcon(icon14);
        histButton->setIconSize(QSize(25, 25));
        histButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        histButton->setAutoRaise(true);

        gridLayout_20->addWidget(histButton, 1, 6, 2, 1);

        horizontalSpacer_4 = new QSpacerItem(734, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_4, 2, 7, 1, 1);

        verticalSpacer = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_20->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_20->addItem(verticalSpacer_3, 2, 2, 1, 1);

        menuTab->addTab(tab, QString());
        filterTab = new QWidget();
        filterTab->setObjectName(QStringLiteral("filterTab"));
        gridLayout_19 = new QGridLayout(filterTab);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setVerticalSpacing(0);
        label_13 = new QLabel(filterTab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(0, 20));
        label_13->setFont(font);

        gridLayout_16->addWidget(label_13, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setVerticalSpacing(1);
        label_14 = new QLabel(filterTab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(40, 0));
        label_14->setMaximumSize(QSize(40, 16777215));

        gridLayout_5->addWidget(label_14, 0, 0, 1, 1);

        label_15 = new QLabel(filterTab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(40, 0));
        label_15->setMaximumSize(QSize(40, 16777215));

        gridLayout_5->addWidget(label_15, 0, 1, 1, 1);

        label_16 = new QLabel(filterTab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(40, 0));
        label_16->setMaximumSize(QSize(40, 16777215));

        gridLayout_5->addWidget(label_16, 0, 2, 1, 1);

        label_17 = new QLabel(filterTab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(40, 0));
        label_17->setMaximumSize(QSize(40, 16777215));

        gridLayout_5->addWidget(label_17, 0, 3, 1, 1);

        minUedit = new QLineEdit(filterTab);
        minUedit->setObjectName(QStringLiteral("minUedit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(minUedit->sizePolicy().hasHeightForWidth());
        minUedit->setSizePolicy(sizePolicy3);
        minUedit->setMinimumSize(QSize(50, 24));
        minUedit->setMaximumSize(QSize(40, 16777215));
        minUedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(minUedit, 1, 0, 1, 1);

        maxUedit = new QLineEdit(filterTab);
        maxUedit->setObjectName(QStringLiteral("maxUedit"));
        sizePolicy3.setHeightForWidth(maxUedit->sizePolicy().hasHeightForWidth());
        maxUedit->setSizePolicy(sizePolicy3);
        maxUedit->setMinimumSize(QSize(50, 24));
        maxUedit->setMaximumSize(QSize(40, 16777215));
        maxUedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(maxUedit, 1, 1, 1, 1);

        minVedit = new QLineEdit(filterTab);
        minVedit->setObjectName(QStringLiteral("minVedit"));
        sizePolicy3.setHeightForWidth(minVedit->sizePolicy().hasHeightForWidth());
        minVedit->setSizePolicy(sizePolicy3);
        minVedit->setMinimumSize(QSize(50, 24));
        minVedit->setMaximumSize(QSize(40, 16777215));
        minVedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(minVedit, 1, 2, 1, 1);

        maxVedit = new QLineEdit(filterTab);
        maxVedit->setObjectName(QStringLiteral("maxVedit"));
        sizePolicy3.setHeightForWidth(maxVedit->sizePolicy().hasHeightForWidth());
        maxVedit->setSizePolicy(sizePolicy3);
        maxVedit->setMinimumSize(QSize(50, 24));
        maxVedit->setMaximumSize(QSize(40, 16777215));
        maxVedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(maxVedit, 1, 3, 1, 1);


        gridLayout_16->addLayout(gridLayout_5, 0, 1, 2, 1);

        globalRangeCheck = new QCheckBox(filterTab);
        globalRangeCheck->setObjectName(QStringLiteral("globalRangeCheck"));
        globalRangeCheck->setMinimumSize(QSize(75, 20));

        gridLayout_16->addWidget(globalRangeCheck, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        globalStDevCheck = new QCheckBox(filterTab);
        globalStDevCheck->setObjectName(QStringLiteral("globalStDevCheck"));
        globalStDevCheck->setMinimumSize(QSize(0, 20));

        horizontalLayout_9->addWidget(globalStDevCheck);

        nStdDevSpin = new QDoubleSpinBox(filterTab);
        nStdDevSpin->setObjectName(QStringLiteral("nStdDevSpin"));
        nStdDevSpin->setMinimumSize(QSize(0, 24));
        nStdDevSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(nStdDevSpin);

        label_18 = new QLabel(filterTab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(0, 20));

        horizontalLayout_9->addWidget(label_18);


        gridLayout_16->addLayout(horizontalLayout_9, 2, 0, 1, 2);


        gridLayout_19->addLayout(gridLayout_16, 0, 0, 1, 1);

        line_5 = new QFrame(filterTab);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_19->addWidget(line_5, 0, 1, 1, 1);

        gridLayout_18 = new QGridLayout();
        gridLayout_18->setSpacing(6);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setVerticalSpacing(2);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_19 = new QLabel(filterTab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(0, 20));
        label_19->setFont(font);

        horizontalLayout_6->addWidget(label_19);

        localCheck = new QCheckBox(filterTab);
        localCheck->setObjectName(QStringLiteral("localCheck"));
        localCheck->setMinimumSize(QSize(0, 20));

        horizontalLayout_6->addWidget(localCheck);


        gridLayout_18->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_14, 0, 1, 1, 1);

        label_22 = new QLabel(filterTab);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(60, 20));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_22, 0, 2, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_20 = new QLabel(filterTab);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(0, 20));

        horizontalLayout_2->addWidget(label_20);

        horizontalSpacer_18 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_18);

        localMethodCombo = new QComboBox(filterTab);
        localMethodCombo->setObjectName(QStringLiteral("localMethodCombo"));
        localMethodCombo->setMinimumSize(QSize(100, 22));

        horizontalLayout_2->addWidget(localMethodCombo);


        gridLayout_18->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        label_23 = new QLabel(filterTab);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_18->addWidget(label_23, 1, 2, 1, 1);

        localUedit = new QLineEdit(filterTab);
        localUedit->setObjectName(QStringLiteral("localUedit"));
        localUedit->setMinimumSize(QSize(40, 22));
        localUedit->setMaximumSize(QSize(32, 32));
        localUedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_18->addWidget(localUedit, 1, 3, 1, 1);

        label_21 = new QLabel(filterTab);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(100, 20));

        gridLayout_18->addWidget(label_21, 2, 0, 1, 1);

        localNxNCombo = new QComboBox(filterTab);
        localNxNCombo->setObjectName(QStringLiteral("localNxNCombo"));
        localNxNCombo->setMinimumSize(QSize(80, 22));
        localNxNCombo->setMaximumSize(QSize(80, 16777215));

        gridLayout_18->addWidget(localNxNCombo, 2, 1, 1, 1);

        label_24 = new QLabel(filterTab);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_18->addWidget(label_24, 2, 2, 1, 1);

        localVedit = new QLineEdit(filterTab);
        localVedit->setObjectName(QStringLiteral("localVedit"));
        localVedit->setMinimumSize(QSize(40, 22));
        localVedit->setMaximumSize(QSize(32, 16777215));
        localVedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_18->addWidget(localVedit, 2, 3, 1, 1);


        gridLayout_19->addLayout(gridLayout_18, 0, 2, 1, 1);

        line_6 = new QFrame(filterTab);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_19->addWidget(line_6, 0, 3, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(6);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setVerticalSpacing(0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_25 = new QLabel(filterTab);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(0, 20));
        label_25->setMaximumSize(QSize(80, 22));
        label_25->setFont(font);

        horizontalLayout_5->addWidget(label_25);

        interpolateCheck = new QCheckBox(filterTab);
        interpolateCheck->setObjectName(QStringLiteral("interpolateCheck"));
        interpolateCheck->setMinimumSize(QSize(0, 20));
        interpolateCheck->setMaximumSize(QSize(16777215, 22));

        horizontalLayout_5->addWidget(interpolateCheck);


        gridLayout_15->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setVerticalSpacing(2);
        label_26 = new QLabel(filterTab);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMinimumSize(QSize(0, 20));

        gridLayout_14->addWidget(label_26, 0, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_13, 0, 1, 1, 1);

        interpolateMethodCombo = new QComboBox(filterTab);
        interpolateMethodCombo->setObjectName(QStringLiteral("interpolateMethodCombo"));
        interpolateMethodCombo->setMinimumSize(QSize(100, 22));
        interpolateMethodCombo->setMaximumSize(QSize(80, 16777215));

        gridLayout_14->addWidget(interpolateMethodCombo, 0, 2, 1, 2);

        label_27 = new QLabel(filterTab);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMinimumSize(QSize(100, 24));

        gridLayout_14->addWidget(label_27, 1, 0, 1, 3);

        interpolateNxNCombo = new QComboBox(filterTab);
        interpolateNxNCombo->setObjectName(QStringLiteral("interpolateNxNCombo"));
        interpolateNxNCombo->setMinimumSize(QSize(50, 22));

        gridLayout_14->addWidget(interpolateNxNCombo, 1, 3, 1, 1);


        gridLayout_15->addLayout(gridLayout_14, 1, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_15, 0, 4, 1, 1);

        line_7 = new QFrame(filterTab);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_19->addWidget(line_7, 0, 5, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setVerticalSpacing(0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_28 = new QLabel(filterTab);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMinimumSize(QSize(0, 20));
        label_28->setFont(font);

        horizontalLayout_4->addWidget(label_28);

        smoothCheck = new QCheckBox(filterTab);
        smoothCheck->setObjectName(QStringLiteral("smoothCheck"));
        smoothCheck->setMinimumSize(QSize(0, 20));

        horizontalLayout_4->addWidget(smoothCheck);


        gridLayout_17->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(2);
        label_29 = new QLabel(filterTab);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setMinimumSize(QSize(0, 20));

        gridLayout_4->addWidget(label_29, 0, 0, 1, 1);

        smoothNxNCombo = new QComboBox(filterTab);
        smoothNxNCombo->setObjectName(QStringLiteral("smoothNxNCombo"));
        smoothNxNCombo->setMinimumSize(QSize(80, 22));
        smoothNxNCombo->setMaximumSize(QSize(80, 16777215));

        gridLayout_4->addWidget(smoothNxNCombo, 0, 1, 1, 2);

        label_30 = new QLabel(filterTab);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMinimumSize(QSize(0, 20));

        gridLayout_4->addWidget(label_30, 1, 0, 1, 2);

        smoothRadiusEdit = new QLineEdit(filterTab);
        smoothRadiusEdit->setObjectName(QStringLiteral("smoothRadiusEdit"));
        smoothRadiusEdit->setMinimumSize(QSize(50, 24));
        smoothRadiusEdit->setMaximumSize(QSize(60, 16777215));
        smoothRadiusEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(smoothRadiusEdit, 1, 2, 1, 1);


        gridLayout_17->addLayout(gridLayout_4, 1, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_17, 0, 6, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(79, 43, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_8, 0, 7, 1, 1);

        menuTab->addTab(filterTab, QString());
        helpTab = new QWidget();
        helpTab->setObjectName(QStringLiteral("helpTab"));
        gridLayout_13 = new QGridLayout(helpTab);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        helpButton = new QToolButton(helpTab);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        sizePolicy2.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy2);
        helpButton->setMinimumSize(QSize(80, 60));
        helpButton->setMaximumSize(QSize(80, 64));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/icons/system-help.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon15);
        helpButton->setIconSize(QSize(30, 30));
        helpButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        helpButton->setAutoRaise(true);

        gridLayout_13->addWidget(helpButton, 0, 0, 1, 1);

        tutorialsButton = new QToolButton(helpTab);
        tutorialsButton->setObjectName(QStringLiteral("tutorialsButton"));
        sizePolicy2.setHeightForWidth(tutorialsButton->sizePolicy().hasHeightForWidth());
        tutorialsButton->setSizePolicy(sizePolicy2);
        tutorialsButton->setMinimumSize(QSize(80, 60));
        tutorialsButton->setMaximumSize(QSize(80, 64));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/icons/applications-education.png"), QSize(), QIcon::Normal, QIcon::Off);
        tutorialsButton->setIcon(icon16);
        tutorialsButton->setIconSize(QSize(30, 30));
        tutorialsButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tutorialsButton->setAutoRaise(true);

        gridLayout_13->addWidget(tutorialsButton, 0, 1, 1, 1);

        aboutButton = new QToolButton(helpTab);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        sizePolicy2.setHeightForWidth(aboutButton->sizePolicy().hasHeightForWidth());
        aboutButton->setSizePolicy(sizePolicy2);
        aboutButton->setMinimumSize(QSize(80, 60));
        aboutButton->setMaximumSize(QSize(80, 64));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/icons/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutButton->setIcon(icon17);
        aboutButton->setIconSize(QSize(25, 25));
        aboutButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        aboutButton->setAutoRaise(true);

        gridLayout_13->addWidget(aboutButton, 0, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(765, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_12, 0, 3, 1, 1);

        menuTab->addTab(helpTab, QString());

        verticalLayout_2->addWidget(menuTab);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        listTab = new QTabWidget(splitter);
        listTab->setObjectName(QStringLiteral("listTab"));
        listTab->setMinimumSize(QSize(200, 0));
        listTab->setTabPosition(QTabWidget::West);
        imageListTab = new QWidget();
        imageListTab->setObjectName(QStringLiteral("imageListTab"));
        verticalLayout_3 = new QVBoxLayout(imageListTab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        aLabel = new QLabel(imageListTab);
        aLabel->setObjectName(QStringLiteral("aLabel"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        aLabel->setFont(font1);

        verticalLayout_3->addWidget(aLabel);

        aListWidget = new ImageList(imageListTab);
        aListWidget->setObjectName(QStringLiteral("aListWidget"));

        verticalLayout_3->addWidget(aListWidget);

        bLabel = new QLabel(imageListTab);
        bLabel->setObjectName(QStringLiteral("bLabel"));
        bLabel->setFont(font1);

        verticalLayout_3->addWidget(bLabel);

        bListWidget = new ImageList(imageListTab);
        bListWidget->setObjectName(QStringLiteral("bListWidget"));

        verticalLayout_3->addWidget(bListWidget);

        listTab->addTab(imageListTab, QString());
        dataTab = new QWidget();
        dataTab->setObjectName(QStringLiteral("dataTab"));
        gridLayout_8 = new QGridLayout(dataTab);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        aLabel_2 = new QLabel(dataTab);
        aLabel_2->setObjectName(QStringLiteral("aLabel_2"));
        aLabel_2->setFont(font1);

        gridLayout_8->addWidget(aLabel_2, 0, 0, 1, 1);

        vectorListWidget = new VectorList(dataTab);
        vectorListWidget->setObjectName(QStringLiteral("vectorListWidget"));
        vectorListWidget->horizontalHeader()->setVisible(false);
        vectorListWidget->verticalHeader()->setVisible(false);

        gridLayout_8->addWidget(vectorListWidget, 1, 0, 1, 1);

        listTab->addTab(dataTab, QString());
        splitter->addWidget(listTab);
        displayTab = new QTabWidget(splitter);
        displayTab->setObjectName(QStringLiteral("displayTab"));
        displayTab->setMinimumSize(QSize(350, 0));
        displayTab->setTabPosition(QTabWidget::East);
        imageDispTab = new QWidget();
        imageDispTab->setObjectName(QStringLiteral("imageDispTab"));
        gridLayout = new QGridLayout(imageDispTab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_39 = new QLabel(imageDispTab);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setMinimumSize(QSize(58, 25));
        label_39->setMaximumSize(QSize(60, 25));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_39->setFont(font2);

        gridLayout->addWidget(label_39, 1, 3, 1, 1);

        backButton = new QPushButton(imageDispTab);
        backButton->setObjectName(QStringLiteral("backButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy4);
        backButton->setMaximumSize(QSize(40, 40));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/icons/player_rew.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon18);
        backButton->setIconSize(QSize(32, 32));
        backButton->setFlat(true);

        gridLayout->addWidget(backButton, 1, 0, 1, 1);

        forwardButton = new QPushButton(imageDispTab);
        forwardButton->setObjectName(QStringLiteral("forwardButton"));
        sizePolicy4.setHeightForWidth(forwardButton->sizePolicy().hasHeightForWidth());
        forwardButton->setSizePolicy(sizePolicy4);
        forwardButton->setMaximumSize(QSize(40, 40));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/icons/player_fwd.png"), QSize(), QIcon::Normal, QIcon::Off);
        forwardButton->setIcon(icon19);
        forwardButton->setIconSize(QSize(32, 32));
        forwardButton->setFlat(true);

        gridLayout->addWidget(forwardButton, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(83, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        positionLabel = new QLabel(imageDispTab);
        positionLabel->setObjectName(QStringLiteral("positionLabel"));
        positionLabel->setMinimumSize(QSize(120, 25));
        positionLabel->setMaximumSize(QSize(120, 25));
        QFont font3;
        font3.setPointSize(12);
        positionLabel->setFont(font3);

        gridLayout->addWidget(positionLabel, 1, 4, 1, 1);

        pivDisplay = new PivDisplay(imageDispTab);
        pivDisplay->setObjectName(QStringLiteral("pivDisplay"));

        gridLayout->addWidget(pivDisplay, 0, 0, 1, 5);

        displayTab->addTab(imageDispTab, QString());
        splitter->addWidget(displayTab);

        verticalLayout_2->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        menuTab->setCurrentIndex(1);
        listTab->setCurrentIndex(0);
        displayTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "OpenPIV-C++", 0));
        newSession->setText(QApplication::translate("MainWindow", "New Session", 0));
        openSession->setText(QApplication::translate("MainWindow", "Open Session", 0));
        saveSession->setText(QApplication::translate("MainWindow", "Save Session", 0));
        label_40->setText(QApplication::translate("MainWindow", "Session details", 0));
        label_43->setText(QApplication::translate("MainWindow", "Name:", 0));
        sessionLabel->setText(QString());
        menuTab->setTabText(menuTab->indexOf(homeTab), QApplication::translate("MainWindow", "Home", 0));
        importButton->setText(QApplication::translate("MainWindow", "Import Images", 0));
        maskButton->setText(QApplication::translate("MainWindow", "Image Mask", 0));
        correlateButton->setText(QApplication::translate("MainWindow", "Correlate", 0));
        filterButton->setText(QApplication::translate("MainWindow", "Filter", 0));
        batchButton->setText(QApplication::translate("MainWindow", "Batch Process", 0));
        label_34->setText(QApplication::translate("MainWindow", "Output ", 0));
        label_35->setText(QApplication::translate("MainWindow", "Folder", 0));
        outputFolderButton->setText(QApplication::translate("MainWindow", "...", 0));
        label_36->setText(QApplication::translate("MainWindow", "Format", 0));
        menuTab->setTabText(menuTab->indexOf(startTab), QApplication::translate("MainWindow", "Doing PIV", 0));
        label_11->setText(QApplication::translate("MainWindow", "Images", 0));
        zoomInButton->setText(QApplication::translate("MainWindow", "Zoom In", 0));
        zoomOutButton->setText(QApplication::translate("MainWindow", "Zoom Out", 0));
        zoomFitButton->setText(QApplication::translate("MainWindow", "Zoom Fit", 0));
        lutButton->setText(QApplication::translate("MainWindow", "LUT", 0));
        label_8->setText(QApplication::translate("MainWindow", "Vectors", 0));
        label_9->setText(QApplication::translate("MainWindow", "Turn on/off", 0));
        vectorToggle->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Scale", 0));
        label_12->setText(QApplication::translate("MainWindow", "Subtract (px)", 0));
        label_32->setText(QApplication::translate("MainWindow", "Colours", 0));
        label_31->setText(QApplication::translate("MainWindow", "Unfiltered", 0));
        colourButtonUnfiltered->setText(QString());
        label_33->setText(QApplication::translate("MainWindow", "Filtered", 0));
        colourButtonFiltered->setText(QString());
        menuTab->setTabText(menuTab->indexOf(viewTab), QApplication::translate("MainWindow", "View", 0));
        label_2->setText(QApplication::translate("MainWindow", "Interrogation window", 0));
        label_6->setText(QApplication::translate("MainWindow", "Cross-correlator", 0));
        label_3->setText(QApplication::translate("MainWindow", "Horizontal size (px)", 0));
        label->setText(QApplication::translate("MainWindow", "Horizontal overlap (%)", 0));
        label_7->setText(QApplication::translate("MainWindow", "Subpixel Interpolator", 0));
        label_4->setText(QApplication::translate("MainWindow", "Vertical size (px)", 0));
        label_5->setText(QApplication::translate("MainWindow", "Vertical overlap (%)", 0));
        menuTab->setTabText(menuTab->indexOf(correlationTab), QApplication::translate("MainWindow", "Correlation", 0));
        label_37->setText(QApplication::translate("MainWindow", "Signal-to-noise ratio", 0));
        filterSNRCheck->setText(QApplication::translate("MainWindow", "Filter threshold", 0));
        label_41->setText(QApplication::translate("MainWindow", "Image intensity", 0));
        filterIntCheck->setText(QApplication::translate("MainWindow", "Filter threshold", 0));
        label_38->setText(QApplication::translate("MainWindow", "Correlation map", 0));
        label_42->setText(QApplication::translate("MainWindow", "Peak locking", 0));
        corrMapPickButton->setText(QApplication::translate("MainWindow", "Pick (x,y)", 0));
        histButton->setText(QApplication::translate("MainWindow", "Histogram", 0));
        menuTab->setTabText(menuTab->indexOf(tab), QApplication::translate("MainWindow", "Data Quality", 0));
        label_13->setText(QApplication::translate("MainWindow", "Global", 0));
        label_14->setText(QApplication::translate("MainWindow", "min U", 0));
        label_15->setText(QApplication::translate("MainWindow", "max U", 0));
        label_16->setText(QApplication::translate("MainWindow", "min V", 0));
        label_17->setText(QApplication::translate("MainWindow", "max V", 0));
        minUedit->setInputMask(QString());
        maxUedit->setInputMask(QString());
        minVedit->setInputMask(QString());
        maxVedit->setInputMask(QString());
        globalRangeCheck->setText(QApplication::translate("MainWindow", "Range", 0));
        globalStDevCheck->setText(QApplication::translate("MainWindow", "Standard Deviation", 0));
        label_18->setText(QApplication::translate("MainWindow", "# of std. dev.", 0));
        label_19->setText(QApplication::translate("MainWindow", "Local", 0));
        localCheck->setText(QString());
        label_22->setText(QApplication::translate("MainWindow", "Tolerance", 0));
        label_20->setText(QApplication::translate("MainWindow", "Method", 0));
        label_23->setText(QApplication::translate("MainWindow", "U", 0));
        label_21->setText(QApplication::translate("MainWindow", "Neighbourhood", 0));
        label_24->setText(QApplication::translate("MainWindow", "V", 0));
        label_25->setText(QApplication::translate("MainWindow", "Interpolate", 0));
        interpolateCheck->setText(QString());
        label_26->setText(QApplication::translate("MainWindow", "Method", 0));
        label_27->setText(QApplication::translate("MainWindow", "Neighbourhood", 0));
        label_28->setText(QApplication::translate("MainWindow", "Smoothing", 0));
        smoothCheck->setText(QString());
        label_29->setText(QApplication::translate("MainWindow", "Neighbourhood", 0));
        label_30->setText(QApplication::translate("MainWindow", "Gaussian std. dev.", 0));
        menuTab->setTabText(menuTab->indexOf(filterTab), QApplication::translate("MainWindow", "Filters", 0));
        helpButton->setText(QApplication::translate("MainWindow", "Help", 0));
        tutorialsButton->setText(QApplication::translate("MainWindow", "Tutorials", 0));
        aboutButton->setText(QApplication::translate("MainWindow", "About", 0));
        menuTab->setTabText(menuTab->indexOf(helpTab), QApplication::translate("MainWindow", "Help", 0));
        aLabel->setText(QApplication::translate("MainWindow", "A Images", 0));
        bLabel->setText(QApplication::translate("MainWindow", "B Images", 0));
        listTab->setTabText(listTab->indexOf(imageListTab), QApplication::translate("MainWindow", "Images", 0));
        aLabel_2->setText(QApplication::translate("MainWindow", "Velocity Data", 0));
        listTab->setTabText(listTab->indexOf(dataTab), QApplication::translate("MainWindow", "Data", 0));
        label_39->setText(QApplication::translate("MainWindow", "(x,y) = ", 0));
        backButton->setText(QString());
        forwardButton->setText(QString());
        positionLabel->setText(QString());
        displayTab->setTabText(displayTab->indexOf(imageDispTab), QApplication::translate("MainWindow", "PIV Display", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
