

#include "legenditem.h"
#include <QStyleOption>
#include <QPainter>

LegendItem::LegendItem(QWidget *parent) : QFrame(parent)
{
    _pLayout = new QHBoxLayout(this);

    _pLabelText = new QLabel("", this);

    _pLabelColor = new QLabel(this);
    _pLabelColor->setAutoFillBackground(true);
    _pLabelColor->setMinimumSize(10, 10);

    _pLayout->addWidget(_pLabelColor);
    _pLayout->addWidget(_pLabelText);

    setLayout(_pLayout);
}

void LegendItem::setText(QString txt)
{
    _pLabelText->setText(txt);
}

void LegendItem::setColor(QColor color)
{
    QPalette palette = _pLabelColor->palette();
    palette.setColor(QPalette::Background, color);
    _pLabelColor->setPalette(palette);
}
