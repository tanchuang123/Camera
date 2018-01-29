/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtIP;
    QLabel *lblIP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txtPort;
    QLabel *lblPort;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName(QStringLiteral("ConfigDialog"));
        ConfigDialog->resize(363, 200);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConfigDialog->sizePolicy().hasHeightForWidth());
        ConfigDialog->setSizePolicy(sizePolicy);
        ConfigDialog->setMinimumSize(QSize(363, 200));
        ConfigDialog->setMaximumSize(QSize(363, 200));
        ConfigDialog->setContextMenuPolicy(Qt::DefaultContextMenu);
        gridLayout = new QGridLayout(ConfigDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ConfigDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        txtIP = new QLineEdit(ConfigDialog);
        txtIP->setObjectName(QStringLiteral("txtIP"));
        txtIP->setFont(font);
        txtIP->setFrame(true);

        horizontalLayout->addWidget(txtIP);


        verticalLayout->addLayout(horizontalLayout);

        lblIP = new QLabel(ConfigDialog);
        lblIP->setObjectName(QStringLiteral("lblIP"));
        lblIP->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lblIP->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setUnderline(false);
        lblIP->setFont(font1);
        lblIP->setLayoutDirection(Qt::LeftToRight);
        lblIP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lblIP);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(ConfigDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        txtPort = new QLineEdit(ConfigDialog);
        txtPort->setObjectName(QStringLiteral("txtPort"));
        txtPort->setFont(font);
        txtPort->setMaxLength(32767);

        horizontalLayout_2->addWidget(txtPort);


        verticalLayout->addLayout(horizontalLayout_2);

        lblPort = new QLabel(ConfigDialog);
        lblPort->setObjectName(QStringLiteral("lblPort"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lblPort->setPalette(palette1);
        lblPort->setFont(font1);
        lblPort->setLayoutDirection(Qt::LeftToRight);
        lblPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lblPort);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        buttonBox = new QDialogButtonBox(ConfigDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(txtIP);
        label_2->setBuddy(txtPort);
#endif // QT_NO_SHORTCUT

        retranslateUi(ConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QApplication::translate("ConfigDialog", "\350\257\267\350\276\223\345\205\245\346\234\215\345\212\241\345\231\250IP\345\234\260\345\235\200\345\222\214\347\253\257\345\217\243", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        ConfigDialog->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("ConfigDialog", "IP\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        txtIP->setInputMask(QString());
        txtIP->setText(QApplication::translate("ConfigDialog", "192.168.47.131", Q_NULLPTR));
        lblIP->setText(QApplication::translate("ConfigDialog", "IP\345\234\260\345\235\200\344\270\215\350\203\275\344\270\272\347\251\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConfigDialog", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        txtPort->setInputMask(QString());
        txtPort->setText(QApplication::translate("ConfigDialog", "10086", Q_NULLPTR));
        lblPort->setText(QApplication::translate("ConfigDialog", "\347\253\257\345\217\243\344\270\215\350\203\275\344\270\272\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
