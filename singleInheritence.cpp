User
student mark shit persentic c++ make gui app

ChatGPT
Sure, I can provide you with an example of how to create a simple GUI application for calculating student marks percentage using C++ with Qt framework. First, ensure you have Qt installed on your system.

Here's a basic example of how you can create a Qt GUI application for this purpose:

cpp
Copy code
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>
#include <QMessageBox>

class StudentMarkCalculator : public QWidget {
public:
    StudentMarkCalculator(QWidget *parent = nullptr) : QWidget(parent) {
        QLabel *marksLabel = new QLabel("Enter marks obtained:");
        marksEdit = new QLineEdit;
        QLabel *totalMarksLabel = new QLabel("Enter total marks:");
        totalMarksEdit = new QLineEdit;
        QPushButton *calculateButton = new QPushButton("Calculate");

        QVBoxLayout *layout = new QVBoxLayout;
        QHBoxLayout *marksLayout = new QHBoxLayout;
        QHBoxLayout *totalMarksLayout = new QHBoxLayout;

        marksLayout->addWidget(marksLabel);
        marksLayout->addWidget(marksEdit);
        totalMarksLayout->addWidget(totalMarksLabel);
        totalMarksLayout->addWidget(totalMarksEdit);

        layout->addLayout(marksLayout);
        layout->addLayout(totalMarksLayout);
        layout->addWidget(calculateButton);

        setLayout(layout);

        connect(calculateButton, SIGNAL(clicked()), this, SLOT(calculatePercentage()));
    }

private slots:
    void calculatePercentage() {
        QString marksText = marksEdit->text();
        QString totalMarksText = totalMarksEdit->text();

        bool ok;
        double marks = marksText.toDouble(&ok);
        if (!ok) {
            QMessageBox::warning(this, "Error", "Invalid marks entered.");
            return;
        }

        double totalMarks = totalMarksText.toDouble(&ok);
        if (!ok) {
            QMessageBox::warning(this, "Error", "Invalid total marks entered.");
            return;
        }

        double percentage = (marks / totalMarks) * 100;

        QMessageBox::information(this, "Result", "Percentage: " + QString::number(percentage) + "%");
    }

private:
    QLineEdit *marksEdit;
    QLineEdit *totalMarksEdit;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    StudentMarkCalculator calculator;
    calculator.setWindowTitle("Student Mark Calculator");
    calculator.show();
    return app.exec();
}