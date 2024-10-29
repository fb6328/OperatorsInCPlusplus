#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>

class MultiplyApp : public QWidget
{
public:
    MultiplyApp(QWidget *parent = nullptr);

private slots:
    void onMultiplyClicked();

private:
    QLineEdit *num1Edit;
    QLineEdit *num2Edit;
};

MultiplyApp::MultiplyApp(QWidget *parent)
    : QWidget(parent)
{

    // Create widgets
    QLabel *num1Label = new QLabel("Enter First Number:");
    num1Edit = new QLineEdit;

    QLabel *num2Label = new QLabel("Enter Second Number:");
    num2Edit = new QLineEdit;

    QPushButton *multiplyButton = new QPushButton("Multiply");
    connect(multiplyButton, &QPushButton::clicked, this, &MultiplyApp::onMultiplyClicked);

    // Layout setup
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(num1Label);
    layout->addWidget(num1Edit);
    layout->addWidget(num2Label);
    layout->addWidget(num2Edit);
    layout->addWidget(multiplyButton);

    setLayout(layout);
    setWindowTitle("Multiply Two Numbers");
    setFixedSize(300, 200);
}

void MultiplyApp::onMultiplyClicked()
{
    bool ok1, ok2;
    double num1 = num1Edit->text().toDouble(&ok1);
    double num2 = num2Edit->text().toDouble(&ok2);

    if (ok1 && ok2)
    {
        double result = num1 * num2;
        QMessageBox::information(this, "Result", "Result: " + QString::number(result));
    }
    else
    {
        QMessageBox::warning(this, "Input Error", "Please enter valid numbers.");
    }
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MultiplyApp window;
    window.show();

    return app.exec();
}
