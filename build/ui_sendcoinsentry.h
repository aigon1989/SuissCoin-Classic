/********************************************************************************
** Form generated from reading UI file 'sendcoinsentry.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSENTRY_H
#define UI_SENDCOINSENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsEntry
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    BitcoinAmountField *payAmount;
    QHBoxLayout *horizontalLayout_2;
    QValidatedLineEdit *addAsLabel;
    QLabel *label_4;
    QHBoxLayout *payToLayout;
    QValidatedLineEdit *payTo;
    QToolButton *addressBookButton;
    QToolButton *pasteButton;
    QToolButton *deleteButton;

    void setupUi(QFrame *SendCoinsEntry)
    {
        if (SendCoinsEntry->objectName().isEmpty())
            SendCoinsEntry->setObjectName(QStringLiteral("SendCoinsEntry"));
        SendCoinsEntry->resize(729, 136);
        SendCoinsEntry->setFrameShape(QFrame::StyledPanel);
        SendCoinsEntry->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(SendCoinsEntry);
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(SendCoinsEntry);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 5, 0, 1, 1);

        label_2 = new QLabel(SendCoinsEntry);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        payAmount = new BitcoinAmountField(SendCoinsEntry);
        payAmount->setObjectName(QStringLiteral("payAmount"));

        gridLayout->addWidget(payAmount, 5, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addAsLabel = new QValidatedLineEdit(SendCoinsEntry);
        addAsLabel->setObjectName(QStringLiteral("addAsLabel"));
        addAsLabel->setEnabled(true);

        horizontalLayout_2->addWidget(addAsLabel);


        gridLayout->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        label_4 = new QLabel(SendCoinsEntry);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        payToLayout = new QHBoxLayout();
        payToLayout->setSpacing(0);
        payToLayout->setObjectName(QStringLiteral("payToLayout"));
        payTo = new QValidatedLineEdit(SendCoinsEntry);
        payTo->setObjectName(QStringLiteral("payTo"));
        payTo->setMaxLength(34);

        payToLayout->addWidget(payTo);

        addressBookButton = new QToolButton(SendCoinsEntry);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);

        payToLayout->addWidget(addressBookButton);

        pasteButton = new QToolButton(SendCoinsEntry);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);

        payToLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(SendCoinsEntry);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);

        payToLayout->addWidget(deleteButton);


        gridLayout->addLayout(payToLayout, 3, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(payAmount);
        label_2->setBuddy(payTo);
        label_4->setBuddy(addAsLabel);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendCoinsEntry);

        QMetaObject::connectSlotsByName(SendCoinsEntry);
    } // setupUi

    void retranslateUi(QFrame *SendCoinsEntry)
    {
        SendCoinsEntry->setWindowTitle(QApplication::translate("SendCoinsEntry", "Form", nullptr));
        label->setText(QApplication::translate("SendCoinsEntry", "A&mount:", nullptr));
        label_2->setText(QApplication::translate("SendCoinsEntry", "Pay &To:", nullptr));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to your address book", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("SendCoinsEntry", "&Label:", nullptr));
#ifndef QT_NO_TOOLTIP
        payTo->setToolTip(QApplication::translate("SendCoinsEntry", "The address to send the payment to  (e.g. oRBkGBRp3i8Cj1q4yeDh5nxz8ACj4TaH7D)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendCoinsEntry", "Choose address from address book", nullptr));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        addressBookButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+A", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Paste address from clipboard", nullptr));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        pasteButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+P", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Remove this recipient", nullptr));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SendCoinsEntry: public Ui_SendCoinsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSENTRY_H
