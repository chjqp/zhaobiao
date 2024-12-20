#include <QLabel>
#include <QMouseEvent>
#include <QEvent>
#include "global.h"

class ClickedLabel : public QLabel {
    Q_OBJECT

public:
    ClickedLabel(QWidget* parent);
    void SetState(QString normal, QString hover, QString press, QString select, QString select_hover, QString select_press);
    ClickLbState GetCurState();
    bool SetCurState(ClickLbState state);
    void ResetNormalState();

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
    void enterEvent(QEnterEvent *event) override;  // 修改为 QEnterEvent*
    void leaveEvent(QEvent *event) override;      // 保持为 QEvent*


signals:
    void clicked(QString text, ClickLbState state);

private:
    QString _normal;
    QString _normal_hover;
    QString _normal_press;
    QString _selected;
    QString _selected_hover;
    QString _selected_press;
    ClickLbState _curstate;
};

ClickedLabel::ClickedLabel(QWidget* parent) : QLabel(parent), _curstate(ClickLbState::Normal) {
    setCursor(Qt::PointingHandCursor);  // 设置光标为小手
}

void ClickedLabel::mousePressEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        if (_curstate == ClickLbState::Normal) {
            _curstate = ClickLbState::Selected;
            setProperty("state", _selected_press);
            repolish(this);
            update();
        } else {
            _curstate = ClickLbState::Normal;
            setProperty("state", _normal_press);
            repolish(this);
            update();
        }
        return;
    }
    QLabel::mousePressEvent(event);
}

void ClickedLabel::mouseReleaseEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        if (_curstate == ClickLbState::Normal) {
            setProperty("state", _normal_hover);
        } else {
            setProperty("state", _selected_hover);
        }
        repolish(this);
        update();
        emit clicked(this->text(), _curstate);
        return;
    }
    QLabel::mouseReleaseEvent(event);
}

void ClickedLabel::enterEvent(QEnterEvent* event) {
    if (_curstate == ClickLbState::Normal) {
        setProperty("state", _normal_hover);
    } else {
        setProperty("state", _selected_hover);
    }
    repolish(this);
    update();
    QLabel::enterEvent(event);
}

void ClickedLabel::leaveEvent(QEvent* event) {
    if (_curstate == ClickLbState::Normal) {
        setProperty("state", _normal);
    } else {
        setProperty("state", _selected);
    }
    repolish(this);
    update();
    QLabel::leaveEvent(event);
}

void ClickedLabel::SetState(QString normal, QString hover, QString press, QString select, QString select_hover, QString select_press) {
    _normal = normal;
    _normal_hover = hover;
    _normal_press = press;
    _selected = select;
    _selected_hover = select_hover;
    _selected_press = select_press;
    setProperty("state", normal);
    repolish(this);
}

ClickLbState ClickedLabel::GetCurState() {
    return _curstate;
}

bool ClickedLabel::SetCurState(ClickLbState state) {
    _curstate = state;
    if (_curstate == ClickLbState::Normal) {
        setProperty("state", _normal);
    } else {
        setProperty("state", _selected);
    }
    repolish(this);
    return true;
}

void ClickedLabel::ResetNormalState() {
    _curstate = ClickLbState::Normal;
    setProperty("state", _normal);
    repolish(this);
}
