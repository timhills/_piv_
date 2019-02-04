/********************************************************************************
** Form generated from reading UI file 'importimages.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTIMAGES_H
#define UI_IMPORTIMAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "importimagelist.h"

QT_BEGIN_NAMESPACE

class Ui_ImportImages
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *topLabel;
    QLineEdit *dirEdit;
    ImportImageList *imageListWidget;
    QWidget *layoutWidget;
    QHBoxLayout *buttonLayout;
    QPushButton *importButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ImportImages)
    {
        if (ImportImages->objectName().isEmpty())
            ImportImages->setObjectName(QStringLiteral("ImportImages"));
        ImportImages->resize(400, 428);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/openpiv.png"), QSize(), QIcon::Normal, QIcon::Off);
        ImportImages->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ImportImages);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        topLabel = new QLabel(ImportImages);
        topLabel->setObjectName(QStringLiteral("topLabel"));

        verticalLayout->addWidget(topLabel);

        dirEdit = new QLineEdit(ImportImages);
        dirEdit->setObjectName(QStringLiteral("dirEdit"));
        dirEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dirEdit->setReadOnly(true);

        verticalLayout->addWidget(dirEdit);

        imageListWidget = new ImportImageList(ImportImages);
        imageListWidget->setObjectName(QStringLiteral("imageListWidget"));

        verticalLayout->addWidget(imageListWidget);

        layoutWidget = new QWidget(ImportImages);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        buttonLayout = new QHBoxLayout(layoutWidget);
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        buttonLayout->setSizeConstraint(QLayout::SetFixedSize);
        importButton = new QPushButton(layoutWidget);
        importButton->setObjectName(QStringLiteral("importButton"));

        buttonLayout->addWidget(importButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        buttonLayout->addWidget(cancelButton);


        verticalLayout->addWidget(layoutWidget);


        retranslateUi(ImportImages);

        QMetaObject::connectSlotsByName(ImportImages);
    } // setupUi

    void retranslateUi(QDialog *ImportImages)
    {
        ImportImages->setWindowTitle(QApplication::translate("ImportImages", "Image Import", 0));
        topLabel->setText(QApplication::translate("ImportImages", "Recognized images in:", 0));
        importButton->setText(QApplication::translate("ImportImages", "Import", 0));
        cancelButton->setText(QApplication::translate("ImportImages", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ImportImages: public Ui_ImportImages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTIMAGES_H
