/********************************************************************************
** Form generated from reading UI file 'commentsview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTSVIEW_H
#define UI_COMMENTSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CommentsView
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *h_words;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *h_characters;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QLineEdit *acc_word;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLineEdit *acc_character;
    QHBoxLayout *ratingsAccLayout;
    QLabel *ratingLabel;
    QLineEdit *rating;
    QLabel *avgAccLabel;
    QLineEdit *avgAcc;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QTextBrowser *commentTextBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *CommentsView)
    {
        if (CommentsView->objectName().isEmpty())
            CommentsView->setObjectName(QString::fromUtf8("CommentsView"));
        CommentsView->resize(509, 385);
        CommentsView->setStyleSheet(QString::fromUtf8("color:black;font: 11pt \"Work Sans\"; \n"
"background-color: rgb(32, 33, 72);"));
        verticalLayout_7 = new QVBoxLayout(CommentsView);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(CommentsView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label);

        line_3 = new QFrame(CommentsView);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(CommentsView);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_2);

        h_words = new QLineEdit(CommentsView);
        h_words->setObjectName(QString::fromUtf8("h_words"));
        h_words->setStyleSheet(QString::fromUtf8("color:black; \n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(h_words);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(CommentsView);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_4);

        h_characters = new QLineEdit(CommentsView);
        h_characters->setObjectName(QString::fromUtf8("h_characters"));
        h_characters->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);color:black; \n"
""));

        verticalLayout_2->addWidget(h_characters);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        line_2 = new QFrame(CommentsView);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(CommentsView);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_6);

        line = new QFrame(CommentsView);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_7 = new QLabel(CommentsView);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(label_7);

        acc_word = new QLineEdit(CommentsView);
        acc_word->setObjectName(QString::fromUtf8("acc_word"));
        acc_word->setStyleSheet(QString::fromUtf8("color:black; \n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(acc_word);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_8 = new QLabel(CommentsView);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_8);

        acc_character = new QLineEdit(CommentsView);
        acc_character->setObjectName(QString::fromUtf8("acc_character"));
        acc_character->setStyleSheet(QString::fromUtf8("color:black; \n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(acc_character);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_3);

        ratingsAccLayout = new QHBoxLayout();
        ratingsAccLayout->setObjectName(QString::fromUtf8("ratingsAccLayout"));
        ratingLabel = new QLabel(CommentsView);
        ratingLabel->setObjectName(QString::fromUtf8("ratingLabel"));
        ratingLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        ratingsAccLayout->addWidget(ratingLabel);

        rating = new QLineEdit(CommentsView);
        rating->setObjectName(QString::fromUtf8("rating"));
        rating->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255); color:black; \n"
""));
        rating->setReadOnly(true);

        ratingsAccLayout->addWidget(rating);

        avgAccLabel = new QLabel(CommentsView);
        avgAccLabel->setObjectName(QString::fromUtf8("avgAccLabel"));
        avgAccLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        ratingsAccLayout->addWidget(avgAccLabel);

        avgAcc = new QLineEdit(CommentsView);
        avgAcc->setObjectName(QString::fromUtf8("avgAcc"));
        avgAcc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255); color:black; \n"
""));
        avgAcc->setReadOnly(true);

        ratingsAccLayout->addWidget(avgAcc);


        verticalLayout_7->addLayout(ratingsAccLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(CommentsView);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_5);

        commentTextBrowser = new QTextBrowser(CommentsView);
        commentTextBrowser->setObjectName(QString::fromUtf8("commentTextBrowser"));
        commentTextBrowser->setMaximumSize(QSize(604, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Work Sans"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        commentTextBrowser->setFont(font);
        commentTextBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255); color:black; \n"
""));
        commentTextBrowser->setReadOnly(false);
        commentTextBrowser->setOverwriteMode(true);

        verticalLayout_7->addWidget(commentTextBrowser);

        pushButton = new QPushButton(CommentsView);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Work Sans"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:rgb(227, 228, 228);border:0px; color: rgb(32, 33, 72); height:26.96px; width: 113.5px; padding-top:1px; border-radius:4.8px; padding-left:1.3px; selection-color: rgb(32, 33, 72); selection-background-color: rgb(136, 138, 133);\n"
"} QPushButton:checked{background-color: rgb(136, 138, 133);} QPushButton:pressed {background-color: rgb(136, 138, 133);}"));

        verticalLayout_7->addWidget(pushButton);


        retranslateUi(CommentsView);

        QMetaObject::connectSlotsByName(CommentsView);
    } // setupUi

    void retranslateUi(QDialog *CommentsView)
    {
        CommentsView->setWindowTitle(QApplication::translate("CommentsView", "View Comments", nullptr));
        label->setText(QApplication::translate("CommentsView", "<b>Total Highlights</b>", nullptr));
        label_2->setText(QApplication::translate("CommentsView", "Words", nullptr));
        label_4->setText(QApplication::translate("CommentsView", "Characters", nullptr));
        label_6->setText(QApplication::translate("CommentsView", "<b>Accuracy</b>", nullptr));
        label_7->setText(QApplication::translate("CommentsView", "Word-Level", nullptr));
        label_8->setText(QApplication::translate("CommentsView", "Character-Level", nullptr));
        ratingLabel->setText(QApplication::translate("CommentsView", "<html><head/><body><p><span style=\" font-weight:600;\">Rating for</span></p></body></html>", nullptr));
        avgAccLabel->setText(QApplication::translate("CommentsView", "<html><head/><body><p><span style=\" font-weight:600;\">Avg. Char. Accuracy for</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("CommentsView", "<html><head/><body><p><span style=\" font-weight:600;\">Add Comments</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("CommentsView", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommentsView: public Ui_CommentsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTSVIEW_H
