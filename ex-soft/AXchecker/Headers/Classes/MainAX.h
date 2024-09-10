#ifndef AXCHECKER_MAINAX_H
#define AXCHECKER_MAINAX_H

#include <main.h>
#include <Classes/Utils.h>
#include <Classes/WidgetBuilder.h>
#include <Classes/DialogView.h>

class MainAX : public QWidget {
    QVBoxLayout* mainLayout     = nullptr;
    QHBoxLayout* controlLayout  = nullptr;
    QTextEdit*   configTextarea = nullptr;
    QPushButton* selectButton   = nullptr;
    QPushButton* buildButton    = nullptr;
    QLineEdit*   pathInput      = nullptr;

    WidgetBuilder* widgetBuilder = nullptr;
    DialogView*    dialogView    = nullptr;

    void createUI();
    void setStyle();

public:
    explicit MainAX();
    ~MainAX() override;

public slots:
    void SelectFile();
    void BuildForm();

};

#endif //AXCHECKER_MAINAX_H